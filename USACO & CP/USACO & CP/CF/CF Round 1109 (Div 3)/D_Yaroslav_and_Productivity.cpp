#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n, m; cin >> n >> m; 
    vector<int> a(n), b(m+1);
    vector<ll> pref(n+1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i+1] = pref[i] + a[i];
    }
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }

    sort(all(b)); 

    ll ans = pref.back();
    int coeff = 1; 
    for (int i = m; i >= 1; i--) {
        if (coeff * (pref[b[i]] - pref[b[i-1]]) < 0) {
            ans += 2LL * (coeff *= -1) * pref[b[i]];
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}