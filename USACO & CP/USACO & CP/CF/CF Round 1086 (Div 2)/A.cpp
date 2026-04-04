#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    map<int, int> ocr;
    for (int i = 0; i < n*n; i++) {
        int a; cin >> a;
        ocr[a]++; 
    }

    for (auto [_, c] : ocr) {
        if (c > n * (n-1)) {
            cout << "NO\n";
            return; 
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}