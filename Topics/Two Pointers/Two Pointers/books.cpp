#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t; cin >> n >> t;
    vector<int> a (n), prefix(n+1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prefix[i+1] = prefix[i] + a[i];
    }
    int i1 = 0, i2 = 1, ans = 0;
    while (i1 <= n && i2 <= n) {
        int sum = prefix[i2] - prefix[i1];
        if (sum > t) {
            i1++;
        } else {
            ans = max(ans, i2-i1);
            i2++;
        }
    }
    
    cout << ans << endl; 
}
