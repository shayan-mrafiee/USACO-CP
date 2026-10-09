#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int a, b, c; cin >> a >> b >> c; 

    vector<int> v = {a, b, c}; 
    int rounds = 0; 
    while (v[0] != v[1] && v[1] != v[2] && v[2] != v[0]) {
        rounds++; 
        auto smallest = min_element(all(v));
        auto biggest = max_element(all(v));
        (*smallest)++; (*biggest)--; 
    }

    cout << rounds << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}