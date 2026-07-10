//https://usaco.org/index.php?page=viewproblem2&cpid=1160
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M; cin >> N >> M; 
    vector<int> a_count(M+1), b_count(M+1);

    for (int i = 0; i < N; i++) {
        int a, b; cin >> a >> b; 
        a_count[a]++;
        b_count[b]++; 
    }

    vector<ll> ans(2*M+2);

    for (int i = 0; i <= M; i++) {
        for (int j = 0; j <= M; j++) {
            ll num = 1LL * a_count[i] * a_count[j];
            ans[i + j] += num; 
        }
    }
    
    for (int i = 0; i <= M; i++) {
        for (int j = 0; j <= M; j++) {
            ll num = 1LL * b_count[i] * b_count[j];
            ans[i + j + 1] -= num; 
        }
    }

    cout << ans[0] << "\n"; 
    for (int k = 1; k <= 2*M; k++) {
        cout << (ans[k] += ans[k-1]) << "\n";
    }
}