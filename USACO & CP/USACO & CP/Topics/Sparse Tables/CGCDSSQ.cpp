//https://codeforces.com/contest/475/problem/D
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int lg2(int n) { return 31 - __builtin_clz(n); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int K = lg2(n) + 1; 
    vector<vector<int>> st_gcd(K+1, vector<int>(n));
    map<int, ll> cnt;

    for (int &a : st_gcd[0]) cin >> a; 

    for (int k = 1; k <= K; k++) {
        for (int i = 0; i + (1 << k) <= n; i++) {
            st_gcd[k][i] = gcd(st_gcd[k-1][i], st_gcd[k-1][i + (1 << (k-1))]); 
        }
    }

    auto find_gcd = [st_gcd](int l, int r) {
        int k = lg2(r - l + 1);
        return gcd(st_gcd[k][l], st_gcd[k][r - (1 << k) + 1]); 
    }; 

    // first index r where gcd(l ... r) < x
    auto find_next_r = [&](int l, int r, int x) {
        int lo = r+1, hi = n-1, res = n; 
        while(lo <= hi) {
            int m = lo + (hi - lo)/2; 
            if (find_gcd(l, m) < x) {
                hi = m-1; 
                res = m;
            }
            else lo = m+1; 
        }

        return res; 
    };

    for (int l = 0; l < n; l++) {
        int r = l; 
        while (r < n) {
            int g = find_gcd(l, r);
            int next_r = find_next_r(l, r, g);
            cnt[g] += next_r - r; 
            r = next_r;
        }
    }

    int q; cin >> q; 
    while (q--) {
        int x; cin >> x; 
        cout << cnt[x] << "\n";
    }
}