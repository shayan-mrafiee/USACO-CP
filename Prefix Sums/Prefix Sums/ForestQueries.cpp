//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int n, q; cin >> n >> q;
//    vector<vector<int>> prefix (n+1, vector<int>(n+1));
//    
//    for (int i = 0; i < n; i++) {
//        string row; cin >> row;
//        for (int j = 0; j < n; j++) {
//            prefix[i+1][j+1] = prefix[i+1][j] + prefix[i][j+1] - prefix[i][j] + (row[j] == '*');
//        }
//    }
//    
//    while(q--) {
//        int y1, x1, y2, x2;
//        cin >> y1 >> x1 >> y2 >> x2;
//        cout << prefix[y2][x2] - prefix[y1-1][x2] - prefix[y2][x1-1] + prefix[y1-1][x1-1] << endl;
//    }
//}
