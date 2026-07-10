//https://www.spoj.com/problems/FIBOSUM/
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

const int MOD = 1e9 + 7; 

int fib(int n) { // nth fibonacci #
    n--; 
    ll a = 0, b = 1; 
    int hi = 31 - __builtin_clz(n); 
    for (int i = hi; i >= 0; i--) {
        ll c = (a * (2*b - a) % MOD) % MOD;
        ll d = (a*a % MOD + b*b % MOD) % MOD; 
        if ((n >> i) & 1) 
            a = d, b = (c+d) % MOD; 
        else
            a = c, b = d; 
    }

    return b; 
}

void solve() {
    int N, M; cin >> N >> M; 

    cout << ((fib(M+2) - fib(N+1)) % MOD + MOD) % MOD << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}