#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n;; cin >> n; 
    vector<ll> f(n); 

    for (ll &i : f) cin >> i; 

    ll prev = 0;
    ll sum = (f[0] + f[n-1])/(n-1);
    vector<int> a(n);
    for (int i = 0; i + 1 < n; i++) {
        a[i] = sum - prev - f[i] + f[i+1];
        prev += a[i];
        a[i] /= 2; 
    }

    a.back() = sum - prev/2; 

    for (int i : a) cout << i << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}