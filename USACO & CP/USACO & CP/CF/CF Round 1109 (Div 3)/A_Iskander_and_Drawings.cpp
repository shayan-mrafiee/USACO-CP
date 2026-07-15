#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    string s; cin >> s; 

    int cur = 0; 
    int best = 0; 
    for (char c : s) {
        if (c == '*') {
            best = max(best, cur);
            cur = 0; 
        }
        else cur++; 
    }
    best = max(best, cur);

    cout << (best+1)/2 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}