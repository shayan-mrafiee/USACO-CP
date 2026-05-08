#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int K, N, M, P, Q; 
    cin >> K >> N >> M >> P >> Q; 
    vector<int> X(K), Y(K);

    for (int i = 0; i < K; i++) {
        cin >> X[i] >> Y[i];
    }

    int ans = -1, time = INT32_MAX;
    ll x = X[0] + Q, y = Y[0] + P;
    for (int i = 0; i < K; i++) {
        if (((X[i] - x + Q) % Q) % (N % Q) != 0 ||
            ((Y[i] - y + P) % P) % (M % P) != 0
        ) continue; 

        ll q1 = ((X[i] - x + Q) % Q) / (N % Q);
        ll q2 = ((Y[i] - y + P) % P) / (M % P);
        ll k = lcm((q1 * N + X[i] + x)/Q, (q2 * M + Y[i] - y)/P);

        if (k < time) {
            ans = i+1;
            time = k; 
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}