#include <bits/stdc++.h>

using namespace std;
using ll = long long; 

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
    
    int n, m; cin >> n >> m;
    vector<int> cities (n), towers (m);
    
    for (int &a : cities) cin >> a;
    for (int &b : towers) cin >> b;
    
    int r = 0, b = 0;
    for (int a = 0; a < n; a++) {
        int dist = 2e9;
        for (; towers[b] < cities[a] && b < m-1; b++) {
            dist = min(dist, abs(towers[b] - cities[a]));
        }
        
        if (b < m) dist = min(dist, abs(towers[b] - cities[a]));
        r = max(r, dist);
        if (b) b--;
    }
    
    cout << r << "\n";
}
