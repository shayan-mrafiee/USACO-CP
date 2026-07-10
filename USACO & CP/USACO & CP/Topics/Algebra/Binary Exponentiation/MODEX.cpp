// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3671
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int binpow(ll x, ll y, ll n) {
    // x ^ y % n
    int res = 1; 
    while (y > 0) {
        if (y & 1) res = res * x % n; 
        x = x * x % n; 
        y >>= 1; 
    }

    return res; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--) {
        int x, y, n; 
        cin >> x >> y >> n; 
        cout << binpow(x, y, n) << "\n"; 
    }
}