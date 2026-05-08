#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

set<int> unvisited; 
map<pair<int, int>, bool> no_edge; 
vector<int> sizes;

void dfs(int u) {
    sizes.back()++; 

    auto it = unvisited.begin(); 
    while (it != unvisited.end()) {
        if (no_edge[{u, *it}])
            it++; 
        else {
            int last = *it; 
            unvisited.erase(it);
            dfs(last);
            it = unvisited.upper_bound(last);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin >> n >> m;

    for (int i = 1; i <= n; i++) 
        unvisited.insert(i);
    
    while (m--) {
        int x, y; cin >> x >> y;
        no_edge[{x, y}] = no_edge[{y, x}] = true;
    }

    auto it = unvisited.begin(); 
    while (it != unvisited.end()) {
        sizes.push_back(0);
        int last = *it; 
        unvisited.erase(it);
        dfs(last);
        it = unvisited.upper_bound(last);
    }

    cout << sizes.size() << "\n";
    sort(all(sizes));

    for (int sz : sizes) cout << sz << " ";
    cout << "\n";
}