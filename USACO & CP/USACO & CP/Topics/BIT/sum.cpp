//https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int n;
vector<ll> bit; 
vector<int> nodes; 

ll sum(int i) {
    ll res = 0; 
    while (i >= 0) {
        res += bit[i]; 
        i = (i & (i+1)) - 1; 
    }
    return res; 
}

ll sum(int l, int r) {
    return sum(r) - sum(l-1);
}

void update(int i, int v) {
    int d = v - nodes[i];
    nodes[i] = v; 

    while (i < n) {
        bit[i] += d; 
        i |= i+1; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m; cin >> n >> m; 
    nodes.resize(n);
    bit.resize(n);  

    for (int i = 0; i < n; i++) {
        int v; cin >> v; 
        update(i, v);
    }

    while (m--) {
        int t; cin >> t; 
        if (t == 1) {
            int i, v; cin >> i >> v; 
            update(i, v);
        }
        else {
            int l, r; cin >> l >> r; 
            cout << sum(l, r-1) << "\n";
        }
    }
}