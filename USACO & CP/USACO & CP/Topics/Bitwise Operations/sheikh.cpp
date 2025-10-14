#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()

void solve() {
    int n, q; cin >> n >> q;
    vector<int> a(n);
    
    for (int &i : a) cin >> i;
    int L, R; cin >> L >> R;
    
    ll max_f = accumulate(a.begin() + L-1, a.begin() + R, 0LL) - 
    accumulate(a.begin() + L-1, a.begin() + R, 0LL, [](ll a, ll b) {
        return a ^ b; 
    }),
    
    cur_sum = 0, cur_xor = 0; 
    
    int l = L-1, r = R-1; 
    int last = L-1; 
    for (int i = L-1; i < R; i++) {
        cur_sum += a[i]; 
        cur_xor ^= a[i]; 
        
        if (cur_sum - cur_xor == max_f) {
            for (int j = last; j <= i; j++) {
                if (cur_sum - cur_xor == max_f && i - j < r - l) {
                    r = i; l = j; 
                } 
                cur_sum -= a[j];  
                cur_xor ^= a[j]; 
            }
            cur_sum = cur_xor = 0; 
        }
    }
    
    cout << l+1 << ' ' << r+1 << "\n"; 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
        solve();
}
