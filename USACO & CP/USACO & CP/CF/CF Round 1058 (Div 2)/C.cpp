#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

bool ok(int n) {
    int l = (n ? log2(n)+1 : 0);
    bitset<30> b = n; 
    if (l & 1 && b[l/2]) 
        return false; 
    for (int i = 0; i < l/2; i++) {
        if (b[i] != b[l-i-1]) 
            return false; 
    }
    return true; 
}

void solve() {
    int n; cin >> n; 
    bool possible = ok(n);
    while (!possible && n % 2 == 0)
    {
        n /= 2; 
        possible = ok(n);
    }

    cout << (possible ? "YES\n" : "NO\n"); 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    
    int t; cin >> t; 
    while(t--)
        solve();
}