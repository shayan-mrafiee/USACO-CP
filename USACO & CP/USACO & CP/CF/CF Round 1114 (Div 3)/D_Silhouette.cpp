#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    vector<ll> a(n), b(n);
    map<ll, int> ocr; 

    for (ll &i : b) {
        cin >> i; 
        ocr[i]++; 
    }

    if (!ocr[0]) {
        cout << "-1\n";
        return; 
    }

    vector<pair<ll, int>> v(ocr.begin(), ocr.end());
    map<ll, ll> mp; 
    ll cur_sum = 0, last = 0; 
    for (int i = 0; i < v.size()-1; i++) {
        if (!(cur_sum < v[i+1].first && (v[i+1].first - cur_sum) % ocr[v[i].first] == 0)) {
            cout << "-1\n";
            return; 
        }

        mp[v[i].first] = (v[i+1].first - cur_sum) / ocr[v[i].first];

        if (mp[v[i].first] <= last) {
            cout << "-1\n"; return; 
        }

        cur_sum += ocr[v[i].first] * mp[v[i].first];
        last = mp[v[i].first];
    }
    mp[v.back().first] = last + 1; 

    for (ll i : b) {
        cout << mp[i] << ' '; 
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}