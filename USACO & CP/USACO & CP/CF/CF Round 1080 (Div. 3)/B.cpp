#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    vector<int> p(n); 

    for (int &i : p) cin >> i; 

    vector<bool> visited(n);
    for (int i = 1; i <= n; i++) {
        if (visited[i-1]) continue; 
        int j = i;
        vector<int> v; 
        while (j <= n) {
            visited[j-1] = true; 
            v.push_back(p[j-1]);
            j *= 2; 
        }

        sort(all(v));
        if (v[0] != i) {
            cout << "no\n";
            return; 
        }
        for (int j = 1; j < v.size(); j++) {
            if (v[j] != v[j-1] * 2) {
                cout << "no\n";
                return; 
            }
        }
    }

    cout << "yes\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}