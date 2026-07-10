//https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/C
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

const int INF = 2e9; 
int n; 
vector<pair<int, int>> st; 

pair<int, int> combine(pair<int, int> a, pair<int, int> b) {
    if (a.first < b.first) return a; 
    else if (b.first < a.first) return b; 
    return make_pair(a.first, a.second + b.second);
}

void build(vector<int> &a, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v] = make_pair(a[tl], 1);
        return; 
    }

    int tm = (tl + tr)/2; 
    build(a, 2*v+1, tl, tm); 
    build(a, 2*v+2, tm+1, tr); 
    st[v] = combine(st[2*v+1], st[2*v+2]);
}

void update(int i, int val, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v] = {val, 1};
        return; 
    }

    int tm = (tl + tr)/2; 
    if (i <= tm)
        update(i, val, 2*v+1, tl, tm);
    else
        update(i, val, 2*v+2, tm+1, tr);
    
    st[v] = combine(st[2*v+1], st[2*v+2]);
}

pair<int, int> get_min(int l, int r, int v = 0, int tl = 0, int tr = n-1) {
    if (l > tr || r < tl) return {INF, 1};
    if (l <= tl && tr <= r) return st[v]; 

    int tm = (tl + tr)/2; 
    return combine(get_min(l, r, 2*v+1, tl, tm), get_min(l, r, 2*v+2, tm+1, tr));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m; cin >> n >> m; 
    st.assign(4*n, {INF, 1});
    vector<int> a(n);

    for (int &i : a) cin >> i;
    build(a);

    while (m--) {
        int t; cin >> t; 
        if (t == 1) {
            int i, v; cin >> i >> v; 
            update(i, v);
        }
        else {
            int l, r; cin >> l >> r; 
            auto [mn, ocr] = get_min(l, r-1); 
            cout << mn << " " << ocr << "\n";
        }
    }
}