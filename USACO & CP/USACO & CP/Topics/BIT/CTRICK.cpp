//https://www.spoj.com/problems/CTRICK/
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

struct BIT {
    const int n; 
    vector<pair<int, int>> bit; 

    BIT(int n) : n(n) {
        bit = vector<pair<int, int>>(n+1);
        for (int i = 1; i <= n; i++) {
            bit[i].second = i;
            update(i, 1);
        }
    }

    void update(int i, int val) {
        while (i <= n) {
            bit[i].first += val; 
            i += i & -i;
        }
    }

    int get(int i) { // returns bit[i].first
        int res = 0; 
        while (i >= 1) {
            res += bit[i].first;
            i -= i & -i; 
        }
        return res; 
    }

    int find(int i) { // finds last index j where bit[j].first = i and returns bit[j].second 
        int lo = 1, hi = n; 
        int j = 0; 
        while (lo <= hi) {
            int m = lo + (hi-lo)/2;
            if (get(m) <= i) {
                j = m; 
                lo = m+1;
            }
            else hi = m-1; 
        }

        int res = bit[j].second; 
        update(j+1, -1);
        return res; 
    }
};

void solve() {
    int n; cin >> n; 
    if (n == 1) {
        cout << "1\n";
        return; 
    }

    BIT bit(n); 
    vector<int> ans(n); 
    int k = n;
    ll j = 2;
    for (int i = 1; i <= n; i++, k--, j = (j+i) % (k == 0 ? 1 : k)) {
        if (j == 0) j = k; 
        int idx = bit.find(j); 
        ans[idx-1] = i; 
    }

    for (int i : ans) cout << i << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}