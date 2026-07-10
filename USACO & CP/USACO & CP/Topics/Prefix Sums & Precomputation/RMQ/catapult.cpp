// https://codeforces.com/edu/course/3/lesson/18/1/practice/contest/619571/problem/B
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n, m; cin >> n >> m; 
    const int s = (int) sqrt(n); 
    vector<int> h(n), p(n/s+1, INT32_MIN);

    for (int i = 0; i < n; i++) {
        cin >> h[i]; 
        p[i/s] = max(p[i/s], h[i]);
    }

    int ans = 0; 
    while (m--) {
        int a, b; cin >> a >> b;
        b--; 
        int mx = INT32_MIN, hill_a = h[a-1];
        while (a < b && mx <= hill_a) {
            if (a % s == 0 && a + s <= b) {
                mx = max(mx, p[a/s]);
                a += s; 
            }
            else
                mx = max(mx, h[a++]);
        }

        ans += mx <= hill_a;
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