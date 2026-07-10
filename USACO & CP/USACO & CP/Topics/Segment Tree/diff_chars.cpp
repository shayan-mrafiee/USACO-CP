//https://codeforces.com/problemset/problem/1234/D
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int n; 

vector<bitset<26>> st;

void build(string &s, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v][s[tl]-'a'] = 1; 
        return; 
    }

    int tm = (tl + tr)/2;
    build(s, 2*v+1, tl, tm); 
    build(s, 2*v+2, tm+1, tr);
    st[v] = st[2*v+1] | st[2*v+2];
}

void update(int pos, char c, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v] = 0;
        st[v][c-'a'] = 1; 
        return; 
    }

    int tm = (tl + tr)/2;
    if (pos <= tm)
        update(pos, c, 2*v+1, tl, tm);
    else 
        update(pos, c, 2*v+2, tm+1, tr); 
    
    st[v] = st[2*v+1] | st[2*v+2];
}

bitset<26> query(int l, int r, int v = 0, int tl = 0, int tr = n-1) {
    if (tl > r || tr < l) return 0; 
    if (l <= tl && tr <= r) return st[v]; 

    int tm = (tl + tr)/2; 
    return query(l, r, 2*v+1, tl, tm) | query(l, r, 2*v+2, tm+1, tr);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s; 
    n = s.size();
    st.resize(4*n);

    build(s);

    int q; cin >> q;
    while (q--) {
        int t; cin >> t;
        if (t == 1) {
            int pos; char c; 
            cin >> pos >> c; 
            update(--pos, c);
        }
        else {
            int l, r; cin >> l >> r; 
            cout << query(--l, --r).count() << "\n";
        }
    }
}