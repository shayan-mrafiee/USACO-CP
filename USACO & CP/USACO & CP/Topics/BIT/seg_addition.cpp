#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int n;
vector<ll> bit; 

void update(int i, int d) {
    while (i < n) {
        bit[i] += d; 
        i |= i+1; 
    }
}

void update(int l, int r, int d) {
    update(l, d); 
    update(r+1, -d);
}

ll get(int i) {
    ll res = 0; 
    while (i >= 0) {
        res += bit[i];
        i = (i & (i+1))-1;
    }
    return res; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m;
    cin >> n >> m; 
    bit.resize(n);

    while (m--) {
        int t; cin >> t;
        if (t == 1) {
            int l,r, v; cin >> l >> r >> v;
            update(l, r-1, v);
        }
        else {
            int i; cin >> i; 
            cout << get(i) << "\n";
        }
    }
}