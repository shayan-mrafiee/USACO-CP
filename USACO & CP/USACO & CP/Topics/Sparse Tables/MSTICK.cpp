//https://www.codechef.com/problems/MSTICK
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int lg2(int n) { return 31 - __builtin_clz(n); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N; 
    const int K = lg2(N) + 1; 
    vector<vector<int>> st_max(K+1, vector<int>(N)), st_min;

    for (int &b : st_max[0]) cin >> b; 
    st_min = st_max;

    for (int k = 1; k <= K; k++) {
        for (int i = 0; i + (1 << k) <= N; i++) {
            st_max[k][i] = max(st_max[k-1][i], st_max[k-1][i + (1 << (k-1))]); 
            st_min[k][i] = min(st_min[k-1][i], st_min[k-1][i + (1 << (k-1))]); 
        }
    }

    auto find_max = [&](int L, int R) {
        int k = lg2(R - L + 1); 
        return 1.0 * max(st_max[k][L], st_max[k][R - (1 << k) + 1]); 
    };
    auto find_min = [&](int L, int R) {
        int k = lg2(R - L + 1); 
        return 1.0 * min(st_min[k][L], st_min[k][R - (1 << k) + 1]); 
    };

    /**
     * find min(L ... R). add to ans 
     * define mx
     * find (max(L ... R) - ans)/2.0, and update mx
     * find max(0 ... L-1) and max(R+1 ... N-1), update mx 
     * answer would be ans + mx
     */
    int Q; cin >> Q; 
    while (Q--) {
        int L, R; cin >> L >> R; 
        double ans = find_min(L, R),
        mx = (find_max(L, R) - ans) / 2.0;
        if (L) mx = max(mx, find_max(0, L-1)); 
        if (R+1 < N) mx = max(mx, find_max(R+1, N-1)); 

        cout << ans + mx << "\n";
    }
}