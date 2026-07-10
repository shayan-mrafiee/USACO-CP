#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int n; 
vector<pair<int, bool>> st; // (value of segment, do_xor)

pair<int, bool> combine(pair<int, bool> a, pair<int, bool> b) {
    assert(a.second == b.second);
    bool do_xor = !a.second;
    return {do_xor ? a.first ^ b.first : a.first | b.first, do_xor};
}

void build(vector<int> &a, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v] = {a[tl], true}; 
        return; 
    }

    int tm = (tl + tr)/2; 
    build(a, 2*v+1, tl, tm);
    build(a, 2*v+2, tm+1, tr); 
    st[v] = combine(st[2*v+1], st[2*v+2]);
}

void update(int p, int b, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v].first = b;
        return; 
    }

    int tm = (tl + tr)/2;
    if (p <= tm)
        update(p, b, 2*v+1, tl, tm); 
    else
        update(p, b, 2*v+2, tm+1, tr);
    
    st[v] = combine(st[2*v+1], st[2*v+2]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m; cin >> n >> m; 
    n = (1 << n); 
    vector<int> a(n);
    st.resize(4*n); 

    for (int &i : a) cin >> i;
    build(a);

    while (m--) {
        int p, b; cin >> p >> b; 
        update(--p, b);
        cout << st[0].first << "\n";
    }
}