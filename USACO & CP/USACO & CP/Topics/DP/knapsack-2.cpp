// look on AtCoder for other accepted approaches 
#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, W; cin >> N >> W; 
    vector<int> w(N+1), v(N+1);

    for (int i = 1; i <= N; i++) {
        cin >> w[i] >> v[i];
    }

    const ll INF = accumulate(all(w), 0LL);
    const int MAX_VALUE = accumulate(all(v), 0);
    vector<ll> g(MAX_VALUE+1, INF);

    g[0] = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = MAX_VALUE; j >= v[i]; j--) {
            g[j] = min(g[j], g[j-v[i]] + w[i]);
        }
    }

    for (int i = MAX_VALUE; i >= 0; i--) {
        if (g[i] <= W) {
            return (cout << i << "\n", 0);
        }
    }

    cout << "0\n";
}