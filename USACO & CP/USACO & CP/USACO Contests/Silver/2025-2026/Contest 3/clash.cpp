#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()

pair<ll, int> operator+(pair<ll, int> a, pair<ll, int> b) {
    return make_pair(a.first + b.first, a.second + b.second);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, H; cin >> N >> H; 
    vector<pair<int, int>> cards(N); // (w-cond (-1 = yes, 0 = no), price)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (auto &[_, a] : cards) cin >> a; 

    int k; cin >> k;
    while (k--) {
        int s; cin >> s; 
        cards[--s].first = -1;
    }
    
    for (int i = 0; i < H-1; i++) pq.push(cards[i]);

    vector<ll> times;
    ll cycle_time = 0; 
    for (int i = H-1; i < N; i++) {
        pq.push(cards[i]);
        cycle_time += pq.top().second; 
        if (pq.top().first) times.push_back(cycle_time);
        pq.pop(); 
    }

    int Q; cin >> Q; 
    while (Q--) {
        ll t; cin >> t; 
        ll ans = t / cycle_time * times.size();
        ans += upper_bound(all(times), t % cycle_time) - times.begin();
        cout << ans << "\n";
    }
}