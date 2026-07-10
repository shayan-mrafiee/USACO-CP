#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    vector<int> a(n); 

    for (int &i : a) cin >> i; 

    sort(a.rbegin(), a.rend());

    for (int i = 0; i+2 < n; i++) {
        if (a[i] % a[i+1] != a[i+2]) {
            cout << "-1\n";
            return; 
        }
    }

    cout << a[0] << " " << a[1] << "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}