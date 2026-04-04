#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    vector<int> c(n), p(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i] >> p[i];
    }

    long double ans = 0; 
    for (int i = n-1; i >= 0; i--) {
        ans = max(ans, ans * (1 - p[i]/100.0) + c[i]);
    }

    printf("%.7Lf\n", ans);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}