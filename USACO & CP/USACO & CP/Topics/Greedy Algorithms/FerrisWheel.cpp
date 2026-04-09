#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x; cin >> n >> x; 
    vector<int> p(n);

    for (int &i : p) cin >> i;

    sort(all(p));

    int ans = 0; 
    int l = 0, r = n-1; 
    while (l <= r) {
        if (l == r) {
            ans++; 
            break; 
        }
        else if (p[l] + p[r] > x) {
            ans++;
            r--; 
        }
        else {
            ans++; 
            l++;
            r--; 
        }
    }

    cout << ans << "\n";
    
}