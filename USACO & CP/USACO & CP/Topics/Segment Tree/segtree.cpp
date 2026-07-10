//https://atcoder.jp/contests/practice2/tasks/practice2_j
#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> st; 

void build(vector<int> &a, int v = 1, int tl = 1, int tr = N) {
    if (tl == tr) {
        st[v] = a[tl-1]; 
        return; 
    }

    int tm = (tl + tr) / 2; 
    build(a, 2*v, tl, tm);
    build(a, 2*v+1, tm+1, tr);
    st[v] = max(st[2*v], st[2*v+1]);
}

void update(int i, int val, int v = 1, int tl = 1, int tr = N) {
    if (tl == tr) {
        st[v] = val; 
        return; 
    }

    int tm = (tl + tr)/2; 
    if (i <= tm)
        update(i, val, 2*v, tl, tm); 
    else
        update(i, val, 2*v+1, tm+1, tr); 
    st[v] = max(st[2*v], st[2*v+1]);
}

int get_max(int l, int r, int v = 1, int tl = 1, int tr = N) {
    if (l > tr || r < tl) return 0; 
    if (l <= tl && tr <= r) return st[v];

    int tm = (tl + tr)/2; 
    return max(get_max(l, r, 2*v, tl, tm), get_max(l, r, 2*v+1, tm+1, tr));
}

int find_j(int i, int val, int v = 1, int tl = 1, int tr = N) {
    if (i > tr || st[v] < val) return N+1; 
    if (tl == tr) return tl;

    int tm = (tl + tr)/2; 
    if (i <= tm && st[2*v] >= val) {
        int left = find_j(i, val, 2*v, tl, tm); 
        if (left != N+1) return left; 
    }
    return find_j(i, val, 2*v+1, tm+1, tr); 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q; cin >> N >> Q;
    vector<int> A(N);
    st.resize(4*N);

    for (int &i : A) cin >> i; 
    build(A);

    while (Q--) {
        int T; cin >> T; 
        if (T == 1) {
            int X, V; cin >> X >> V; 
            update(X, V);
        } 
        else if (T == 2) {
            int L, R; cin >> L >> R; 
            cout << get_max(L, R) << "\n";
        }
        else {
            int X, V; cin >> X >> V; 
            cout << find_j(X, V) << "\n";
        }
    }
}