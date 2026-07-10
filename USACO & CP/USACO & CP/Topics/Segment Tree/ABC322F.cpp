#include <bits/stdc++.h>

using namespace std; 

struct Data {
    bool all_target, ignore; 
    int pref, suff, opt; 

    Data(bool b = false) : all_target(0), pref(0), suff(0), opt(0), ignore(b) {}
}; 

Data make_data(bool s_i, bool target) {
    Data d; 
    d.all_target = s_i == target; 
    d.pref = d.suff = d.opt = d.all_target; 
    return d; 
}

Data combine(Data l, Data r) {
    if (l.ignore) return r; 
    if (r.ignore) return l; 

    Data res; 
    res.pref = l.pref + (l.all_target * r.pref); 
    res.suff = r.suff + (r.all_target * l.suff);
    res.all_target = l.all_target & r.all_target;
    res.opt = max(max(l.opt, r.opt), l.suff + r.pref);
    return res; 
}

array<Data, 2> combine(array<Data, 2> l, array<Data, 2> r) {
    return {combine(l[0], r[0]), combine(l[1], r[1])}; 
}

int N; 
vector<array<Data, 2>> st; 
vector<bool> inverted; 

void build(string &S, int v = 0, int tl = 0, int tr = N-1) {
    if (tl == tr) {
        st[v] = {make_data(S[tl]-'0', 0), make_data(S[tl]-'0', 1)};
        return; 
    }

    int tm = (tl + tr)/2; 
    build(S, 2*v+1, tl, tm); 
    build(S, 2*v+2, tm+1, tr); 
    st[v] = combine(st[2*v+1], st[2*v+2]);
}

void push(int v) {
    if (inverted[v]) {
        swap(st[2*v+1][0], st[2*v+1][1]);
        swap(st[2*v+2][0], st[2*v+2][1]);
        inverted[2*v+1] = inverted[2*v+1] ^ 1;
        inverted[2*v+2] = inverted[2*v+2] ^ 1;
        inverted[v] = 0;
    }
}

void update(int L, int R, int v = 0, int tl = 0, int tr = N-1) {
    if (tl > R || tr < L) return; 
    if (L <= tl && tr <= R) {
        inverted[v] = inverted[v] ^ 1;
        swap(st[v][0], st[v][1]);
        return; 
    }

    push(v);
    int tm = (tl + tr)/2; 
    update(L, R, 2*v+1, tl, tm); 
    update(L, R, 2*v+2, tm+1, tr); 
    st[v] = combine(st[2*v+1], st[2*v+2]);
}

Data get(int L, int R, int v = 0, int tl = 0, int tr = N-1) {
    if (tl > R || tr < L) return Data(true); 
    if (L <= tl && tr <= R) {
        return st[v][1]; 
    }

    push(v);
    int tm = (tl + tr)/2; 
    return combine(get(L, R, 2*v+1, tl, tm), get(L, R, 2*v+2, tm+1, tr));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0); 

    int Q; cin >> N >> Q; 
    string S; cin >> S; 

    st.resize(4*N);
    inverted.resize(4*N);
    build(S); 

    while (Q--) {
        int c, L, R; cin >> c >> L >> R; 
        L--; R--;
        if (c == 1) {
            update(L, R);
        }
        else {
            cout << get(L, R).opt << "\n"; 
        }
    }
}