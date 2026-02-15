#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    vector<int> a(n);

    for (int &i : a) cin >> i; 

    int change = 0; 
    int ans = 0; 
    for (int i = 0; i < n-1; i++) {
        if (a[i] == a[i+1] || a[i] + a[i+1] == 7) {
            change++; 
        }
        else {
            ans += (change + 1)/2; 
            change = 0; 
        }
    }
    ans += (change + 1)/2; 

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}