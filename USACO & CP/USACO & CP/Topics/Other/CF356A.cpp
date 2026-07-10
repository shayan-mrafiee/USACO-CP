#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin >> n >> m; 
    set<int> available; 
    vector<int> ans(n); 

    for (int i = 1; i <= n; i++) available.insert(i);

    while (m--) {
        int l, r, x; cin >> l >> r >> x; 
        
        auto it = available.lower_bound(l); 
        while (it != available.end() && *it <= r) {
            auto next_it = it; next_it++; 
            if (*it != x) {
                ans[(*it)-1] = x; 
                available.erase(it); 
            }
            it = next_it;
        }
    }

    for (int i : ans)
        cout << i << " ";
    cout << "\n";
}