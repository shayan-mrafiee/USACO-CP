#include <bits/stdc++.h> 
 
using namespace std;
using ll = long long; 
 
int main() {
    ll n; int k;
    cin >> n >> k; 
    vector<ll> a(k);
    
    for (ll &i : a) cin >> i; 
    
    ll ans = 0; 
    for (int b = 1; b < (1 << k); b++) {
        ll num = 1;
        int sign = (__builtin_popcount(b) & 1) ? 1 : -1; 
        bool ok = true;
        for (int i = 0; i < k; i++) {
            if (b & (1 << i)) {
                if (num > n / a[i]) {
                    ok = false; 
                    break; 
                }
                
                num *= a[i]; 
            }
        }
        
        if (ok) ans += n/(sign * num); 
    }
    
    cout << ans << "\n"; 
}