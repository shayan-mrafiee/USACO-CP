// https://codeforces.com/gym/103886/problem/E
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

const int MOD = 1e9 + 7; 
const int MAX = 1e5; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int po2[MAX+1]; 
    po2[0] = 1;
    for (int i = 1; i < MAX; i++) {
        po2[i] = (po2[i-1] * 2LL) % MOD;
    }

    int ans[MAX+1]; 
    for (int i = 1; i <= MAX; i++) {
        ans[i] = (1LL * ans[i-1] + po2[i-1] - po2[i/2] + MOD) % MOD; 
    }

    int t; cin >> t; 
    while (t--) {
        int l, r; cin >> l >> r; 
        cout << (ans[r] - ans[l-1] + MOD) % MOD << "\n"; 
    }
}