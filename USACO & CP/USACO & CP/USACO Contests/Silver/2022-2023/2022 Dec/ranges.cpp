#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr); 
    
    int N; cin >> N;
    int diff[N][N];
    int ans[N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) cin >> diff[i][j];
    }
    
    int min_pos = 0, max_pos = 0;
    for (int i = 0; i < N; i++) {
        ans[i] = 0; 
        if (diff[0][i] == diff[0][N-1]) {
            min_pos = i;
            break;
        }
    }
    for (int i = 0; i < N; i++) {
        if (diff[i][N-1] != diff[0][N-1]) {
            max_pos = i-1;
            break;
        }
    }
    
    ans[min_pos] = 0;
    ans[max_pos] = diff[0][N-1];
    
    for (int i = min_pos-1; i >= 0; i--) {
        int sign = (ans[i+1] + diff[i][i+1] > diff[0][i]) ? -1 : 1;
        ans[i] = ans[i+1] + sign * diff[i][i+1];
    }
    for (int i = min_pos+1; i < N; i++) {
        if (i == max_pos) continue; 
        int sign = (ans[i-1] + diff[i-1][i] > diff[0][i]) ? -1 : 1;
        ans[i] = ans[i-1] + sign * diff[i-1][i];
    }
    
    for (int i = 1; i < N; i++) {
        int minimum = ans[i], maximum = ans[i]; 
        for (int j = 1; j < N; j++) {
            minimum = min(minimum, ans[j]); 
            maximum = max(maximum, ans[j]); 
            if (maximum - minimum != diff[i][j]) {
                ans[j] = ans[j-1] + (ans[j] == ans[j-1] + diff[j-1][j]) ? -diff[j-1][j] : diff[j-1][j]; 
            }
        }
    }
    
    for (int &i : ans) cout << i << "\n"; 
}
