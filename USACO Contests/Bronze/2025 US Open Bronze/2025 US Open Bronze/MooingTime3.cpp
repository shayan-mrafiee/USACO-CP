#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, Q; string S;
    cin >> N >> Q >> S;
    
    vector<vector<int>>
    left(N, vector<int>(26, -1)),
    right(N, vector<int>(26, N)),
    rightNot(N, vector<int>(26, N));
    
    for (int i = 0; i < N; i++ ) {
        if (i) left[i] = left[i-1];
        left[i][S[i] - 'a'] = i;
    }
    
    for (int i = N-1; i >= 0; i--) {
        if (i < N-1) right[i] = right[i+1];
        right[i][S[i] - 'a'] = i;
        
        int best = N, second_best = N;
        for (int c = 0; c < 26; c++) {
            if (right[i][c] < best) {
                second_best = best;
                best = right[i][c];
            }
            else if (right[i][c] < second_best)
                second_best = right[i][c];
        }
        
        for (int c = 0; c < 26; c++)
            rightNot[i][c] = (right[i][c] == best ? second_best : best);
    }
    
    while(Q--) {
        int l, r; cin >> l >> r;
        l--; r--;
        
        long long ans = -1;
        for (int c = 0; c < 26; c++) {
            int k = left[r][c],
            i = rightNot[l][c];
            
            if (i >= k) continue; 
            
            for (int j : {left[(i + k)/2][c], right[(i + k)/2][c]})
                if (j < k && j > i)
                    ans = max(ans, (long long) (k - j) * (j - i));
        }
        
        cout << ans << "\n";
    }
}
