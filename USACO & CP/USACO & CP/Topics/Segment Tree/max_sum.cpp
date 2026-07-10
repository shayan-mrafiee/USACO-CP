#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

struct Data {
    ll sum, pref, suff, ans; 

    Data(ll val = 0) : sum(val), pref(max(val, 0LL)), suff(max(val, 0LL)), ans(max(val, 0LL)) {}
};

int n; 
vector<Data> st; 

Data combine(Data l, Data r) {
    Data res; 
    res.sum = l.sum + r.sum; 
    res.pref = max(l.pref, l.sum + r.pref);
    res.suff = max(r.suff, r.sum + l.suff);
    res.ans = max(max(l.ans, r.ans), l.suff + r.pref);
    return res; 
}

void build(vector<int> &a, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v] = Data(a[tl]);
        return; 
    }

    int tm = (tl + tr)/2;
    build(a, 2*v+1, tl, tm);
    build(a, 2*v+2, tm+1, tr); 
    st[v] = combine(st[2*v+1], st[2*v+2]);
}

void update(int i, int val, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v] = Data(val);
        return; 
    }

    int tm = (tl + tr)/2; 
    if (i <= tm)
        update(i, val, 2*v+1, tl, tm);
    else
        update(i, val, 2*v+2, tm+1, tr);
    st[v] = combine(st[2*v+1], st[2*v+2]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m; cin >> n >> m; 
    st.resize(4*n);
    vector<int> a(n);

    for (int &i : a) cin >> i;  
    build(a);

    cout << st[0].ans << "\n";
    
    while (m--) {
        int i, v; cin >> i >> v;
        update(i, v); 
        cout << st[0].ans << "\n";
    }
}