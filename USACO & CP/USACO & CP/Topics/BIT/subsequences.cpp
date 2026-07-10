//https://codeforces.com/contest/597/problem/C
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct BIT {
    int n; 
    vector<ll> bit; 

    BIT(int n) : n(n) {
        bit = vector<ll>(n);
    }

    ll get(int i) {
        ll res = 0; 
        while (i >= 0) {
            res += bit[i]; 
            i = (i & (i+1)) - 1; 
        }
        return res; 
    }

    void update(int i, ll val) {
        while (i < n) {
            bit[i] += val; 
            i |= i+1; 
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k; cin >> n >> k; 
    vector<BIT> bit(k+1, BIT(n+1));

    for (int i = 0; i < n; i++) {
        int a; cin >> a; a--; 
        bit[0].update(a, 1); 
        for (int j = 1; j <= k; j++) {
            bit[j].update(a, bit[j-1].get(a-1));
        }
    }

    cout << bit[k].get(n) << "\n";
}