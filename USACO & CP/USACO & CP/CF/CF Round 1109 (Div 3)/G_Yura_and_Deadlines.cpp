#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define pil pair<int, ll> 

int n; 
vector<ll> st; 

void update(int i, ll val, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v] = max(st[v], val);
        return; 
    }

    int tm = (tl + tr)/2;
    if (i <= tm)
        update(i, val, 2*v+1, tl, tm);
    else 
        update(i, val, 2*v+2, tm+1, tr); 
    
    st[v] = max(st[2*v+1], st[2*v+2]);
}

ll get_max(int l, int r = n-1, int v = 0, int tl = 0, int tr = n-1) {
    if (l > r || tl > r || tr < l) return 0LL; 
    if (l <= tl && tr <= r) 
        return st[v]; 

    int tm = (tl + tr)/2; 
    return max(get_max(l, r, 2*v+1, tl, tm), get_max(l, r, 2*v+2, tm+1, tr));
}

void solve() {
    cin >> n; 
    vector<int> a(n); 
    st.clear(); st.resize(4*n);

    for (int &i : a) cin >> i; 

    priority_queue<pair<int, pil>> pq; // (release, index, value)
    ll ans = 0;
    for (int i = n-1; i >= 0; i--) {
        while (!pq.empty() && pq.top().first >= i) {
            int i; ll val; 
            tie(i, val) = pq.top().second; pq.pop();
            update(i, val);
        }

        ll best_option = a[i] + get_max(a[i] + i + 1);
        ans = max(ans, best_option);
        pq.push({i - a[i] - 1, make_pair(i, best_option)});
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}