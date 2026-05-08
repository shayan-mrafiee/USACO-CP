#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    vector<int> a(n), b(n), a_gcd(n-1);

    for (int &i : a) cin >> i; 
    for (int &i : b) cin >> i; 

    for (int i = 0; i < n-1; i++) {
        a_gcd[i] = gcd(a[i], a[i+1]);
    }

    int ans = 0; 
    for (int i = 0; i < n; i++) {
        if (!i) ans += (a_gcd[i] < a[i]); 
        else if (i == n-1) ans += (a_gcd[i-1] < a[i]); 
        else ans += (lcm(a_gcd[i-1], a_gcd[i]) < a[i]);
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}