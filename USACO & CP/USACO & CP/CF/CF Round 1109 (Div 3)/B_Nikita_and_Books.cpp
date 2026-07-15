#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    vector<ll> a(n);

    for (ll &i : a) cin >> i; 

    for (int i = 0; i < n-1; i++) {
        ll val = a[i] - (i+1);
        if (val < 0) {
            cout << "NO\n"; return; 
        }
        a[i] -= val; 
        a[i+1] += val; 
    }

    cout << (n < 2 || a[n-1] > a[n-2] ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}