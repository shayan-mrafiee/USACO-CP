#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, n; cin >> x >> n; 
    priority_queue<int, vector<int>, greater<int>> pq; 

    for (int i = 0; i < n; i++) {
        int d; cin >> d;
        pq.push(d);
    }

    ll ans = 0; 
    while (pq.size() > 1) {
        ll len = pq.top(); pq.pop();
        len += pq.top(); pq.pop();
        pq.push(len);
        ans += len; 
    }

    cout << ans << "\n";
}