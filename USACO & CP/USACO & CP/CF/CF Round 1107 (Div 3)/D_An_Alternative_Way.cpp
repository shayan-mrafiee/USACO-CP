#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n;
    vector<ll> a(n), b(n);

    for (ll &i : a) cin >> i; 
    for (ll &i : b) cin >> i; 

    if (a[0] > b[0]) {
        cout << "NO\n";
        return; 
    }

    for (int i = n-1; i > 0; i--) {
        if (a[i] <= b[i]) continue; 

        // a[i] > b[i]
        ll d = a[i] - b[i];
        a[i-1] += d; 
    }

    cout << (a[0] > b[0] ? "NO\n" : "YES\n"); 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}