#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()

void solve() {
    int n, q; cin >> n >> q;
    vector<int> a(n);
    
    for (int &i : a) cin >> i;
    int L, R; cin >> L >> R;
    
    ll max_f = 0, cur_sum = 0, cur_xor = 0;
    int l = 0, r = 0;
    
    for (int i = 0; i < n; i++) {
        cur_sum += a[i];
        cur_xor ^= a[i];
        
        if (cur_sum - cur_xor < a[i]) {
            cur_sum = cur_xor = a[i];
            l = i;
        }
        
        if (cur_sum - cur_xor > max_f) {
            max_f = cur_sum + cur_xor;
            r = i;
        }
    }
    
    cout << min(l+1, r+1) << " " << r+1 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
        solve();
}
