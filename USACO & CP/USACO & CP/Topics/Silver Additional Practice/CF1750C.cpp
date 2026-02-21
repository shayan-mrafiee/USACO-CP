#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>; 
#define all(x) x.begin(), x.end()

void solve() {
    int n, c, q; cin >> n >> c >> q; 
    string s; cin >> s; 

    vector<pair<pll, pll>> range; 
    ll cur_len = n; 
    while (c--) {
        ll l, r; cin >> l >> r; 
        range.push_back({{cur_len+1, cur_len + r - l + 1}, {l, r}}); 
        cur_len += r - l + 1;
    }

    sort(all(range));

    auto find_equivalent_indx = [&](ll k) {
        int i = range.size()-1; 
        for (; i >= 0 && k > n; i--) {
            pll p = range[i].first;
            if (k >= p.first && k <= p.second) {
                pll r = range[i].second; 
                k = k - p.first + r.first; 
            }
        }

        return k; 
    };
    
    while (q--) {
        ll k; cin >> k; 
        k = find_equivalent_indx(k);

        cout << s[k-1] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}