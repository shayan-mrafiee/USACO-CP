#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

// there will be ceil(2^k / 3) a_0 and a_2^k, and floor(2^k / 3) a_k

void solve() {
    int n, k; cin >> n >> k;
    string s, z; cin >> s >> z; 

    ll x_0 = 0, x_2k = 0, x_k = 0; 
    for (int i = 0; i < n; i++) {
        x_0 += s[i] - '0'; 
        x_2k += z[i] - '0';
        x_k += s[i] != z[i];
    }

    ll length = (1 << k) + 1; 
    ll ans = length/3 * x_k * (n - x_k);
    ans += (length/3 + (k % 2 == 0)) * (x_0 * (n - x_0) + x_2k * (n - x_2k));

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}