#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; string s; 
    cin >> n >> s; 

    if (s[0] == s.back()) {
        cout << "1\n"; return; 
    }

    bool target = (s.back() - '0') ^ 1; 
    int i = n-1; 
    while (s[i] != target + '0') i--;

    target ^= 1; 
    while (s[i] != target+'0' && i) i--;

    cout << (s[i] != s.back() ? "2\n" : "1\n"); 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}