#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

vector<vector<short>> create_comp(int n, vector<int>& a, vector<int>& b) {
    vector<vector<short>> comp(2*n, vector<short>(2*n));
    comp[2*n-1][2*n-1] = a[2*n-1] < b[2*n-1];
    for (int i = 2*n-2; i >= 0; i--) {
        for (int j = 2*n-2; j >= 0; j--) {
            if (a[i] < b[j])
                comp[i][j] = 1 + comp[i+1][j+1];
        }
    }

    return comp; 
}

void solve() {
    int n; cin >> n;
    vector<int> a(2*n), b(2*n), c(2*n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i+n] = a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        b[i+n] = b[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        c[i+n] = c[i];
    }

    vector<vector<short>> comp = create_comp(n, b, c);
    vector<int> dp(n);
    for (int j = n-1; j >= 0; j--) {
        for (int k = n-1; k >= 0; k--) {
            dp[j] += comp[j][k] >= n;
        }
    }

    comp = create_comp(n, a, b);
    ll ans = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (comp[i][j] >= n) {
                ans += dp[j]; 
            }
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}