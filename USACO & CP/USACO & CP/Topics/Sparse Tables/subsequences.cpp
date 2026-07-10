//https://codeforces.com/edu/course/3/lesson/18/2/practice/contest/619577/problem/B
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int lg(int num) { return 31 - __builtin_clz(num); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // count max(a) = min(b)
    int n; cin >> n; 
    const int K = lg(n)+1; 
    vector<vector<int>> max_st(K+1, vector<int>(n)), min_st = max_st;
    ll ans = 0; 

    for (int &i : max_st[0]) cin >> i; 
    for (int &i : min_st[0]) cin >> i; 

    for (int k = 1; k <= K; k++) {
        for (int i = 0; i + (1 << k) <= n; i++) {
            max_st[k][i] = max(max_st[k-1][i], max_st[k-1][i + (1 << (k-1))]); 
            min_st[k][i] = min(min_st[k-1][i], min_st[k-1][i + (1 << (k-1))]); 
        }
    }

    auto val = [&](int l, int r) {
        int k = lg(r - l + 1);
        return max(max_st[k][l], max_st[k][r - (1 << k) + 1]) - min(min_st[k][l], min_st[k][r - (1 << k) + 1]); 
    };

    // first indx where val >= 0
    auto find_r1 = [&](int l) {
        int lo = l, hi = n-1, r1 = n; 
        while (lo <= hi) {
            int m = lo + (hi-lo)/2; 
            if (val(l, m) < 0) lo = m+1; 
            else {
                r1 = m; 
                hi = m-1;
            }
        }

        return r1; 
    }; 

    // first indx where val > 0
    auto find_r2 = [&](int l) {
        int lo = l, hi = n-1, r2 = n; 
        while (lo <= hi) {
            int m = lo + (hi-lo)/2; 
            if (val(l, m) <= 0) lo = m+1; 
            else {
                r2 = m; 
                hi = m-1;
            }
        }

        return r2; 
    }; 

    // count for a fixed l, how many r's work 
    for (int l = 0; l < n; l++) {
        ans += find_r2(l) - find_r1(l); 
    }

    cout << ans << "\n"; 
}