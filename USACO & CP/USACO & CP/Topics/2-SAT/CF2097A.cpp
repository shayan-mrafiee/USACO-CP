#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    vector<int> a(n);

    for (int &i : a) cin >> i; 
    sort(all(a));

    // case 1: a[i] = a[i+1] = a[i+2] = a[i+3]
    for (int i = 0; i + 3 < n; i++) {
        bool b = true; 
        for (int j = 1; j <= 3; j++) {
            if (a[i+j] != a[i+j-1]) {
                b = false; 
                break; 
            }
        }
        if (b) {
            cout << "Yes\n";
            return; 
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}