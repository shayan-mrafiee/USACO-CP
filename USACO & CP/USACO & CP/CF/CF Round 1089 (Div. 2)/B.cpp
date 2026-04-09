#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n;
    vector<int> p(n);

    for (int &i : p) 
        cin >> i, i--; 

    vector<bool> marked(n);
    int cur = 0, best = 0; 
    for (int i = 0; i < n; i++) {
        if (marked[i]) 
            best = max(best, cur);
        else cur++; 
        marked[p[i]] = true; 
    }
    best = max(best, cur);

    cout << best << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}