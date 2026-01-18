#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()


void solve() {
    int n; cin >> n;
    vector<int> a(n);
    
    for (int& i : a)
        cin >> i;
    
    sort(all(a));
    
    auto f = [&](int l, int r) {
        if (a[l] != 0) return 0;
        for (int i = l+1; i <= r; i++) {
            if (a[i] == a[i-1]) continue;
            if (a[i] != a[i-1]+1) {
                return a[i-1]+1;
            }
        }
        return a[r]+1;
    };
    
    for (int i = 0; i < n-1; i++) {
        if (f(0, i) == f(i+1, n-1)) {
            cout << "NO\n";
            return;
        }
    }
    
    cout << "YES\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
    
    int t; cin >> t; 

    while (t--)
    {
        solve(); 
    }
    
}
