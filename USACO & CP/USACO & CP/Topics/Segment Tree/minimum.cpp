//https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/B
#include <bits/stdc++.h>

using std::cout, std::cin, std::vector, std::min, std::ios;
using ll = long long;
#define all(x) x.begin(), x.end()

const int INF = 2e9; 
int n;
vector<int> st;

void build(vector<int> &a, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v] = a[tl];
        return; 
    }

    int tm = (tl + tr) / 2; 
    build(a, 2*v+1, tl, tm); 
    build(a, 2*v+2, tm+1, tr);
    st[v] = min(st[2*v+1], st[2*v+2]);
}

void set(int i, int val, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v] = val; 
        return; 
    }

    int tm = (tl + tr) / 2; 
    if (i <= tm)
        set(i, val, 2*v+1, tl, tm);
    else
        set(i, val, 2*v+2, tm+1, tr);

    st[v] = min(st[2*v+1], st[2*v+2]);
}

int get_min(int l, int r, int v = 0, int tl = 0, int tr = n-1) {
    if (l > tr || r < tl) return INF; 
    if (l <= tl && tr <= r) return st[v];

    int tm = (tl + tr) / 2;
    return min(get_min(l, r, 2*v+1, tl, tm), get_min(l, r, 2*v+2, tm+1, tr));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m; cin >> n >> m; 
    st.assign(4*n, INF);
    vector<int> a(n);

    for (int &i : a) cin >> i; 

    build(a);

    while (m--) {
        int t; cin >> t; 
        if (t == 1) {
            int i, v; cin >> i >> v; 
            set(i, v);
        }
        else {
            int l, r; cin >> l >> r; 
            cout << get_min(l, r-1) << "\n";
        }
    }
}