#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
#define all(x) x.begin(), x.end()

struct BIT {
    int n; 
    vector<int> bit; 

    BIT(int n) : n(n) {
        bit.resize(n); 
        for (int i = 1; i < n; i++) {
            bit[i]++; 
            int r = i | (i+1); 
            if (r < n)
                bit[r] += bit[i]; 
        }
    }

    void update(int i) {
        while (i < n) {
            bit[i]--; 
            i |= i+1; 
        }
    }

    int get_dist(int i) {
        int res = 0; 
        while (i >= 0) {
            res += bit[i];
            i = (i & (i+1)) - 1; 
        }
        return res; 
    }
};

void solve() {
    int N; cin >> N; 
    unordered_map<int, deque<int>> indices; 
    BIT bit_l(N), bit_r(N);
    priority_queue<int> pq; 

    for (int i = 0; i < N; i++) {
        int a; cin >> a; 
        pq.push(a); 
        indices[a].push_back(i);
    }

    ll ans = 0; 
    while (!pq.empty()) {
        int a = pq.top(); pq.pop(); 
        int idx_l = indices[a].front(), idx_r = indices[a].back(); 
        int dist_l = bit_l.get_dist(idx_l), dist_r = bit_r.get_dist(N - idx_r - 1);

        if (dist_l < dist_r) {
            ans += dist_l;
            bit_l.update(idx_l+1);
            bit_r.update(N - idx_l);
            indices[a].pop_front(); 
        }
        else {
            ans += dist_r; 
            bit_l.update(idx_r+1); 
            bit_r.update(N - idx_r);
            indices[a].pop_back();
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T; cin >> T; 
    while (T--) {
        solve(); 
    }
}