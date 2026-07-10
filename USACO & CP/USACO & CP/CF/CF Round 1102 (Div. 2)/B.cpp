#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    ll n; cin >> n; 
    int a = n % 12;
    if (a == 10) a += 12; 

    ll b = max(n - a, 0LL); 
    if (a + b != n) {
        cout << "-1\n";
        return; 
    }

    cout << a << " " << b << "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}