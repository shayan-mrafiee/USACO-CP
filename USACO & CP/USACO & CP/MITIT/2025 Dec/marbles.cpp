//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<char> color;
//vector<int> p;
//const char colors[] = {'R', 'G', 'B'};
//bool available[] = {1, 1, 1};
//
//void dfs(int i) {
//    if (color[p[i]-1] != ' ') {
//        available[find(colors, colors+3, color[p[i]-1])-colors] = false;
//    }
//    for (int j = 0; j < 3; j++) {
//        if (available[j] && color[i] == ' ') {
//            color[i] = colors[j];
//            available[j] = false;
//        }
//        else { available[j] = true; }
//    }
//    
//    if (color[p[i] - 1] == ' ') dfs(p[i] - 1);
//}
//
//void solve() {
//    int N; cin >> N;
//    p = vector<int>(N);
//    color = vector<char>(N, ' ');
//    
//    for (int &i : p) cin >> i;
//    
//    for (int i = 0; i < N; i++) {
//        available[0] = available[1] = available[2] = 1;
//        if (color[i] == ' ') dfs(i);
//    }
//    
//    for (char c : color) cout << c;
//    cout << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
