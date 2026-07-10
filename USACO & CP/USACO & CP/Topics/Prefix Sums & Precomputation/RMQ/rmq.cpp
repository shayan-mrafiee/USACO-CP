#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()


void solve() {
    int n; cin >> n; 
    const int s = (int) sqrt(n); 
    vector<int> a(n), b(n/s + 1, INT32_MAX);

    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
        b[i/s] = min(b[i/s], a[i]);
    }

    int q; cin >> q;
    while (q--) {
        int l, r; cin >> l >> r; 
        int ans = INT32_MAX;

        while (l <= r) {
            if (l % s == 0 && l + s - 1 <= r) {
                ans = min(ans, b[l/s]);
                l += s; 
            }
            else 
                ans = min(ans, a[l++]);
        }

        cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}