//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    freopen("guess.in", "r", stdin);
//    freopen("guess.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<vector<string>> animals (N);
//    int ans = 0;
//    for (int i = 0; i < N; i++) {
//        string a; int K;
//        cin >> a >> K;
//        vector<string> v (K);
//        for (int j = 0; j < K; j++) {
//            cin >> v[j];
//        }
//        animals[i] = v;
//    }
//    
//    for (int i = 0; i < N - 1; i++) {
//        for (int j = i + 1; j < N; j++) {
//            int yes = 0;
//            for (string s : animals[i]) {
//                yes += (count(animals[j].begin(), animals[j].end(), s)) ? 1 : 0;
//            }
//            ans = max(ans, yes + 1);
//        }
//    }
//    
//    cout << ans << endl; 
//}
