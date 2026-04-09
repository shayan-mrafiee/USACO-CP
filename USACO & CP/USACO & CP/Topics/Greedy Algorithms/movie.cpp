#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n; 
    vector<pair<int, int>> movies(n);

    for (auto &[a, b] : movies) cin >> a >> b; 

    sort(all(movies), [](auto &a, auto &b) { return a.second < b.second; });
    int ans = 0, cur_time = 0; 

    for (auto [a, b] : movies) {
        if (a >= cur_time) {
            ans++; 
            cur_time = b; 
        }
    }

    cout << ans << "\n";
}