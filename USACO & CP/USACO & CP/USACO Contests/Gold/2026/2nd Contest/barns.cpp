#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
#define all(x) x.begin(), x.end()

// f(x) = sum(f_i(x))
// f_i(x) = max(a[i] - x - Y, 0, x - b[i])

void solve() {
    int N; ll K;
    cin >> N >> K; 
    vector<ll> a(N); 
    vector<ll> b(N);

    for (ll& i : a) cin >> i; 
    for (ll& i : b) cin >> i; 

    auto f = [&](ll x, ll Y) {
        __int128_t res = 0; 
        for (int i = 0; i < N; i++) {
            res += max({a[i] - x - Y, 0LL, x - b[i]});
        }
        return res; 
    };

    auto min_f = [&](ll Y) {
        __int128_t lo = -2.1e18, hi = 2.1e18;
        __int128_t best = LLONG_MAX;
        while (lo <= hi) {
            __int128_t x = lo + (hi - lo)/2; 
            __int128_t f_x = f(x, Y);

            if (f(x+1, Y) >= f_x) {
                best = f_x;
                hi = x-1;
            }
            else lo = x+1; 
        }

        return best;
    };

    ll hi = 2.1e18, lo = -2.1e18, ans = hi; 
    while (lo <= hi) {
        ll Y = lo + (hi - lo)/2; 
        
        vector<ll> a2 = a, b2 = b; 

        if (min_f(Y) <= K) {
            ans = Y; 
            hi = Y-1; 
        }
        else {
            lo = Y+1; 
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0); 

    int T; cin >> T; 
    while (T--) {
        solve(); 
    }
}