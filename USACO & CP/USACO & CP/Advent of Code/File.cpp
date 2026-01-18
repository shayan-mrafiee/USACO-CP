//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    freopen("input.in", "r", stdin);
//    
//    int N = 142;
//    vector<string> v(N);
//    
//    for (string &s : v) cin >> s;
//    
//    ll ans = 0;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < v[i].size(); j++) {
//            if (v[i][j] == 'S') v[i+1][j] = '|';
//            else if (i && v[i-1][j] == '|') {
//                if (v[i][j] == '^') {
//                    ans++;
//                    if (j) v[i][j-1] = '|';
//                    if (j < v[i].size()-1) v[i][j+1] = '|';
//                }
//                else v[i][j] = '|';
//            }
//        }
//        if (v[i].find('^') != string::npos) ans += count(all(v[i]), '|');
//    }
//    
//    cout << ans << "\n";
//}
