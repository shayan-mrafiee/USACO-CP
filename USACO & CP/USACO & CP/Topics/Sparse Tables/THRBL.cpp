#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int lg2(int n) { return 31 - __builtin_clz(n); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M; cin >> N >> M; 
    const int K = lg2(N) + 1; 
    vector<vector<int>> st(K+1, vector<int>(N));

    for (int &H : st[0]) cin >> H;

    for (int k = 1; k <= K; k++) {
        for (int i = 0; i + (1 << k) <= N; i++) {
            st[k][i] = max(st[k-1][i], st[k-1][i + (1 << (k-1))]); 
        }
    }

    int ans = 0; 
    while (M--) {
        int A, B; cin >> A >> B; 
        A--, B--; 
        int L, R; 
        if (A == B) {
            ans++;
            continue; 
        }
        if (A < B) {
            L = A, R = B-1; 
        }
        else 
            L = B+1, R = A; 
        int k = lg2(R - L + 1); 
        int max_hill = max(st[k][L], st[k][R - (1 << k) + 1]); 

        ans += max_hill <= st[0][A]; 
    }

    cout << ans << "\n";
}