#include <bits/stdc++.h>

using namespace std; 
using ll = long long; 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, W; cin >> N >> W; 
    vector<ll> f(W+1);
    vector<int> w(N+1), v(N+1);

    for (int i = 1; i <= N; i++) {
        cin >> w[i] >> v[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = W; j >= w[i]; j--) {
            f[j] = max(f[j], f[j - w[i]] + v[i]);
        }
    }

    cout << f[W] << "\n"; 
}