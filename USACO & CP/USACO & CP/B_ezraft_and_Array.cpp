#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    if (n == 2) {
        cout << "-1\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (i >= 4) cout << 6LL * (1LL << (i-4)) << " ";
        else cout << i << " "; 
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