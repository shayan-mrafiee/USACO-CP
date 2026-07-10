// https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1970
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int binpow_t(ll n, int k) {
    ll res = 1; 
    while (k) {
        if (k & 1) res = res * n % 1000; 
        n = n * n % 1000; 
        k >>= 1; 
    }

    return res; 
}

int binpow_l(double n, int k) {
    double res = 1; 
    while (k) {
        if (res >= 1000)
            res /= pow(10, (int) log10(res) - 2); 
        if (k & 1) {
            res *= n; 
        }
        n *= n; 
        if (n >= 1000)
            n /= pow(10, (int) log10(n) - 2); 

        k >>= 1; 
    }

    if (res >= 1000) res /= pow(10, (int) log10(res)-2); 
    return (int) res; 
}

void solve() {
    int n, k; cin >> n >> k;
    cout << to_string(binpow_l(n, k)).substr(0, 3) << "..."; 
    int trail = binpow_t(n, k); 
    if (trail == 0) cout << "00"; 
    else if (trail < 100) {
        for (int i = 0; i < 2- (int)log10(trail); i++) cout << 0; 
    }
    cout << trail << "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}