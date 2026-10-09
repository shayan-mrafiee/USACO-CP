#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 

const int MOD = 1e9 + 7; 

int n = 0; 
vector<ll> st, lazy; 

void push(int v) {
    st[2*v+1] = st[2*v+1] * lazy[v] % MOD; 
    lazy[2*v+1] = lazy[2*v+1] * lazy[v] % MOD; 
    st[2*v+2] = st[2*v+2] * lazy[v] % MOD; 
    lazy[2*v+2] = lazy[2*v+2] * lazy[v] % MOD; 
    lazy[v] = 1; 
}

void update(int i, ll val, int v = 0, int tl = 0, int tr = n-1) {
    if (tl == tr) {
        st[v] = (st[v] + val) % MOD; 
        return; 
    }

    push(v); 
    int tm = (tl + tr) / 2; 
    if (i <= tm)
        update(i, val, 2*v+1, tl, tm); 
    else
        update(i, val, 2*v+2, tm+1, tr);

    st[v] = (st[2*v+1] + st[2*v+2]) % MOD;
}

void update_double(int l, int r, int v = 0, int tl = 0, int tr = n-1) {
    if (tl > r || tr < l) return; 
    if (l <= tl && tr <= r) {
        st[v] = 2 * st[v] % MOD; 
        lazy[v] = 2 * lazy[v] % MOD; 
        return; 
    }

    push(v); 
    int tm = (tl + tr) / 2; 
    update_double(l, r, 2*v+1, tl, tm); 
    update_double(l, r, 2*v+2, tm+1, tr); 

    st[v] = (st[2*v+1] + st[2*v+2]) % MOD;
}

int get(int l, int r, int v = 0, int tl = 0, int tr = n-1) {
    if (tl > r || tr < l) return 0; 
    if (l <= tl && tr <= r) return st[v];

    push(v); 
    int tm = (tl + tr) / 2; 
    return (get(l, r, 2*v+1, tl, tm) + get(l, r, 2*v+2, tm+1, tr)) % MOD; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, D; cin >> N >> D; 
    vector<pair<int, bool>> cows(N);
    map<int, int> compressed; 

    for (auto &[p, o] : cows) {
        cin >> p >> o; 
        if (o) {
            compressed[p] = n++; 
        }
    }

    st.resize(4*n);
    lazy.assign(4*n, 1);

    ll ans = 1;
    for (auto [p, o] : cows) {
        if (o) {
            update(compressed[p], ans);
            ans = 2 * ans % MOD;
        }
        else {
            auto it_l = compressed.lower_bound(p - D);
            auto it_r = compressed.lower_bound(p); it_r--; 

            if (it_l != compressed.end() && it_r != compressed.end() && it_l->first <= it_r->first && it_r->first <= p) {
                int left = it_l->second, right = it_r->second; 
                ll val = get(left, right);
                update_double(left, right);
                ans = (ans + val) % MOD;
            }
        }
    }

    cout << (ans + MOD -1) % MOD << "\n";
}