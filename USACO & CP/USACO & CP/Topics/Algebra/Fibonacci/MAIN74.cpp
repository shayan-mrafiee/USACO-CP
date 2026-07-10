//https://www.spoj.com/problems/MAIN74/
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

const int MOD = 1e9 + 7; 

void solve() {
    ll N; cin >> N; // output (N+2)th Fibonacci number 
    if (N == 0) {
        cout << "0\n"; 
        return;
    }
    else if (N == 1) {
        cout << "2\n"; 
        return; 
    }

    N += 2; 

    ll a = 0, b = 1; // a = F(n), b = F(n+1)
    int hi = 63 - __builtin_clzll(N); 
    for (int i = hi; i >= 0; i--) {
        ll c = a * (((2*b - a) % MOD + MOD) % MOD) % MOD; 
        ll d = (a*a % MOD + b*b % MOD) % MOD;

        if ((N >> i) & 1) // F(2k + 1), F(2k + 2)
            a = d, b = (c+d) % MOD; 
        else // (F(2k), F(2k+1))
            a = c, b = d; 
    }

    cout << b << "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}