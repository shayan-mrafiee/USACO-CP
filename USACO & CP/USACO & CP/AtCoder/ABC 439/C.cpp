#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N; 
    vector<int> nums(N+1);

    for (int x = 1; x*x < N; x++) {
        for (int y = x+1; x*x + y*y <= N; y++) {
            nums[x*x + y*y]++; 
        }
    }

    vector<int> ans; 
    for (int i = 1; i <= N; i++) {
        if (nums[i] == 1)
            ans.push_back(i);
    }

    cout << ans.size() << "\n";
    for (int i : ans)
        cout << i << " ";
    cout << "\n";
}