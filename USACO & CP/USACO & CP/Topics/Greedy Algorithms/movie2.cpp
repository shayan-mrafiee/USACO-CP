#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k; cin >> n >> k; 
    vector<pair<int, int>> movies(n);

    for (auto &[a, b] : movies)
        cin >> a >> b; 

    sort(all(movies), [](auto &a, auto &b) { return a.second < b.second; });
    
    multiset<int> ms; 
    for (int i = 0; i < k; i++) ms.insert(0);

    int ans = 0; 
    for (auto [a, b] : movies) {
        auto it = ms.upper_bound(a);
        if (it == ms.begin()) continue; 
        it--; 
        ms.erase(it);
        ms.insert(b);
        ans++;
    }

    cout << ans << "\n";
}