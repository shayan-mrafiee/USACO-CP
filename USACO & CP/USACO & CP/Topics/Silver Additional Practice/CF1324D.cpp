#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n; 
    vector<int> a(n), b(n); 

    for (int &i : a) cin >> i; 
    for (int &i : b) cin >> i; 

    vector<int> d; 
    for (int i = 0; i < n; i++) {
        d.push_back(b[i] - a[i]);
    }

    sort(all(d));

    ll ans = 0; 
    // a[j] - b[j] > b[i] - a[i]
    for (int i = 0; i < n; i++) {
        ans += lower_bound(all(d), a[i] - b[i]) - d.begin() - (a[i] > b[i]); 
    }

    cout << ans/2 << "\n"; 
}