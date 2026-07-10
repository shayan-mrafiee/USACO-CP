#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int n; 
vector<vector<int>> st;

vector<int> combine(const vector<int> &a, const vector<int> &b) {
    vector<int> res; 
    merge(all(a), all(b), back_inserter(res));
    return res; 
}

void build(const vector<int> &b, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v] = {b[tl]};
        return; 
    }

    int tm = (tl + tr)/2; 
    build(b, 2*v+1, tl, tm);
    build(b, 2*v+2, tm+1, tr);
    st[v] = combine(st[2*v+1], st[2*v+2]);
}

// counts how many are smaller than k in b[l...r]
int query(int l, int r, int k, int v = 0, int tl = 0, int tr = n-1) {
    if (tl > r || tr < l || l > r) return 0; 
    if (l <= tl && tr <= r) 
        return lower_bound(all(st[v]), k) - st[v].begin();
    
    int tm = (tl + tr)/2; 
    return query(l, r, k, 2*v+1, tl, tm) + query(l, r, k, 2*v+2, tm+1, tr);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n; 
    st.resize(4*n);
    vector<int> a(n), b(n); // b[j] = f(j, n-1, a[j])

    for (int &i : a) cin >> i; 

    map<int, int> mp; 
    for (int j = n-1; j >= 0; j--) {
        mp[a[j]]++; 
        b[j] = mp[a[j]];
    }

    build(b);
    mp.clear();
    ll ans = 0; 
    for (int i = 0; i < n; i++) {
        mp[a[i]]++; 
        ans += query(i+1, n-1, mp[a[i]]);
    }

    cout << ans << "\n";
}