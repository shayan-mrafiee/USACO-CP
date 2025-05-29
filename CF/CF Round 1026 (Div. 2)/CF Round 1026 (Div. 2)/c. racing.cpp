#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> d(n);
    vector<pair<int, int>> obstacles (n);
    for (int &i : d) cin >> i;
    for (auto &[l, r] : obstacles) cin >> l >> r;
    
    vector<int> limit (n); limit.back() = obstacles.back().second;
    for (int i = n-2; i >= 0; i--) {
        limit[i] = min(limit[i+1], limit[i]) - (d[i+1] == 1);
    }
    
    int h = 0;
    for (int i = 0; i < n; i++) {
        if (d[i] == 1) h++;
        else if (h < limit[i]) {
            h++;
            d[i] = 1;
        }
        else d[i] = 0;
        
        if (h < obstacles[i].first || h > obstacles[i].second) {
            cout << "-1\n";
            return;
        }
    }
    
    for (int i : d) cout << i << ' ';
    cout << "\n"; 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
        solve();
}
