#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n;
    vector<ll> a = {0}; a.reserve(n+1);
    multiset<ll> options; 

    for (int i = 0; i < n; i++) {
        int b; cin >> b; 
        options.insert(b);
    }

    for (int i = 0; i < n; i++) {
        auto it = options.upper_bound(-a.back());
        if (it != options.end()) {
            a.push_back(a.back() + *it); 
            options.erase(it);
        }
        else {
            cout << "-1\n";
            return; 
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " \n"[i == n]; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}