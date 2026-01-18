#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int N, M; cin >> N >> M;
    vector<int> a(N);
    for (int &i : a) {
        cin >> i;
        i %= M;
    }
    
    ll ans = LLONG_MAX;
    for (int x : a) {
        ll ops = 0;
        for (int i : a) {
            ops += min(abs(i - x), abs(i - M - x));
            if (ops >= ans) break;
        }
        ans = min(ans, ops);
    }
    
    cout << ans << "\n";
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}
