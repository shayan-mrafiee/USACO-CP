#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<int, int>; 
#define all(x) x.begin(), x.end()

void solve() {
    int n, k, p, m;
    cin >> n >> k >> p >> m; 
    
    vector<pii> cards(n); 
    for (auto &[_, a] : cards) {
        cin >> a; 
    }

    cards[--p].first = -1; 

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    for (int i = 0; i < k-1; i++) {
        pq.push(cards[i]);
    }

    vector<int> times; 
    int cycle_time = 0;
    for (int i = k-1; i < n; i++) {
        pq.push(cards[i]);
        cycle_time += pq.top().second; 
        if (pq.top().first) times.push_back(cycle_time);
        pq.pop();
    }

    int ans = m / cycle_time; m %= cycle_time; 
    ans += upper_bound(all(times), m) - times.begin(); 
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}