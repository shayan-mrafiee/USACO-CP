#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, W; cin >> N >> W; 
    vector<pair<int, int>> cheese(N);

    for (auto &[A, B] : cheese) {
        cin >> A >> B; 
    }

    sort(all(cheese)); // in reverse order 

    int i = 0; 
    ll ans = 0; 
    while (W && i < N) {
        int val = min(W, cheese[i].second);
        W -= val; 
        ans += 1LL * val * cheese[i].first; 
        i++; 
    }

    cout << ans << "\n";
}