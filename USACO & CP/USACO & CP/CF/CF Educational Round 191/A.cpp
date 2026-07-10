#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int ceil(int a, int b) {
    return a / b + (a % b > 0);
}

void solve() {
    int n, x, y, z; 
    cin >> n >> x >> y >> z; 

    cout << min(ceil(n, x+y), z + ceil(n - z*x, x + 10*y)) << "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}