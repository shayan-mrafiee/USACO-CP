#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int n; 
vector<int> st, lazy;

void push(int v) {
    st[2*v+1] = max(st[2*v+1], lazy[v]);
    lazy[2*v+1] = max(lazy[2*v+1], lazy[v]);
    st[2*v+2] = max(st[2*v+2], lazy[v]);
    lazy[2*v+2] = max(lazy[2*v+2], lazy[v]);
    lazy[v] = 0;
}

void update(int l, int r, int val, int v = 0, int tl = 0, int tr = n-1) {
    if (tl > r || tr < l) return; 
    if (l <= tl && tr <= r) {
        st[v] = max(st[v], val);
        lazy[v] = max(lazy[v], val);
        return; 
    }

    push(v); 
    int tm = (tl + tr)/2;
    update(l, r, val, 2*v+1, tl, tm);
    update(l, r, val, 2*v+2, tm+1, tr);
    st[v] = max(st[2*v+1], st[2*v+2]);
}

int get(int i, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) return st[v];
    
    push(v);
    int tm = (tl + tr)/2; 
    if (i <= tm) 
        return get(i, 2*v+1, tl, tm);
    return get(i, 2*v+2, tm+1, tr);
} 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m; cin >> n >> m;
    st.resize(4*n);
    lazy.resize(4*n);

    while (m--) {
        int t; cin >> t; 
        if (t == 1) {
            int l, r, v; cin >> l >> r >> v; 
            update(l, r-1, v); 
        }
        else {
            int i; cin >> i;
            cout << get(i) << "\n";
        }
    }
}