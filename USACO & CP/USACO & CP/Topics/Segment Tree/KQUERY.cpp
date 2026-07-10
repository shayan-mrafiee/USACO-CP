//https://www.spoj.com/problems/KQUERY/
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int n;
vector<vector<int>> st; 

void build(vector<int> &a, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v] = {-a[tl]};
        return; 
    }

    int tm = (tl + tr)/2; 
    build(a, 2*v+1, tl, tm);
    build(a, 2*v+2, tm+1, tr);
    merge(all(st[2*v+1]), all(st[2*v+2]), back_inserter(st[v]));
}

int query(int l, int r, int k, int v = 0, int tl = 0, int tr = n-1) {
    if (tl > r || tr < l) return 0; 
    if (l <= tl && tr <= r) 
        return lower_bound(all(st[v]), -k) - st[v].begin();
    
    int tm = (tl + tr)/2; 
    return query(l, r, k, 2*v+1, tl, tm) + query(l, r, k, 2*v+2, tm+1, tr); 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    vector<int> a(n);
    st.resize(4*n);

    for (int &i : a) cin >> i; 
    build(a); 

    int q; cin >> q; 
    while (q--) {
        int i, j, k; cin >> i >> j >> k; 
        cout << query(--i, --j, k) << "\n";
    }
}