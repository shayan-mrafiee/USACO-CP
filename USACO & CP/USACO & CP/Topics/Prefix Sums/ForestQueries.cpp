#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q; cin >> n >> q; 
    vector<vector<int>> prefix(n+1, vector<int>(n+1));

    for (int i = 0; i < n; i++) {
        string s; cin >> s; 
        for (int j = 0; j < n; j++) {
            prefix[i+1][j+1] = s[j] == '*';
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            prefix[i][j] += prefix[i-1][j];
            prefix[i][j] += prefix[i][j-1]; 
            prefix[i][j] -= prefix[i-1][j-1];
        }
    }

    while (q--) {
        int y1, x1, y2, x2; 
        cin >> y1 >> x1 >> y2 >> x2; 
        cout << prefix[y2][x2] - prefix[y2][x1-1] - prefix[y1-1][x2] + prefix[y1-1][x1-1] << "\n";
    }
}