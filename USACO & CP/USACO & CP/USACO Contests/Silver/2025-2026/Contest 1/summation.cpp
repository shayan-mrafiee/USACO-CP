#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()

// r[i] = (b[i] + ... + b[i+K-1]) mod 2
// r[i+1] = (b[i+1] + ... + b[i+K]) mod 2
// => r[i] + r[i+1] = (b[i] + b[i+K]) mod 2 bc 2(b[i+1] + ... + b[i+K-1]) mod 2 = 0
// => b[i+k] = (r[i] + r[i+1] + b[i]) mod 2
void solve() {
    int N, K; cin >> N >> K; 
    vector<bool> r(N-K+1); 
    for (int i = 0; i <= N-K; i++) {
        char c; cin >> c; 
        r[i] = c == '1';
    }

    int ans = 0; 
    int min_diff = N; 
    bool sum = 0; // b[0] + ... + b[K-1]
    for (int i = 0; i < K; i++) {
        int v[2] = {1, 0};
        bool b = 0; 
        for (int j = i+K; j < N; j += K) {
            b = (r[j-K] + r[j-K+1] + b) % 2; 
            v[b]++; 
        }

        if (v[0] < v[1]) {
            swap(v[0], v[1]);
            sum ^= 1;  
        } // v = {bigger, smaller}
        min_diff = min(min_diff, v[0] - v[1]);
        ans += v[1];
    }

    // min
    cout << ans + (sum != r[0]) * min_diff << " "; 

    // max
    cout << N - ans - ((K - sum) % 2 != r[0]) * min_diff << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T; cin >> T;
    while (T--)
        solve(); 
}