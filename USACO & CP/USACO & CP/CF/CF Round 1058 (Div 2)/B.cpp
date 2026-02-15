#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    vector<ll> b(n); 

    for (ll& i : b)
        cin >> i; 
    
    vector<int> a(n); a[0] = 1;
    int mx = 1; 
    for (int i = 1; i < n; i++) {
        ll n = b[i] - b[i-1] - 1;
        if (i-n-1 < 0) a[i] = ++mx; 
        else a[i] = a[i-n-1];
    }

    for (int i : a)
        cout << i << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}