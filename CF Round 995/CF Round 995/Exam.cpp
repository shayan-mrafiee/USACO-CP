#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a (m);
    vector<bool> knows (k, false);
    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < k; i++) {
        int m; cin >> m;
        knows[m-1] = true;
    }
    
    for (int i : a) {
        bool passes = true;
        for (int j = 0; j < n; j++) {
            if (j == i-1) continue;
            if (!knows[j]) {
                passes = false;
                break;
            }
        }
        cout << passes;
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}
