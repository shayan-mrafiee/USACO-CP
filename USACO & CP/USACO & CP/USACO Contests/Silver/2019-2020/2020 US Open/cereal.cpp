//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("cereal.in", "r", stdin);
//    freopen("cereal.out", "w", stdout);
//    
//    int N, M; cin >> N >> M;
//    vector<pair<int, int>> favorites(N);
//    
//    for (auto &[f, s] : favorites) {
//        cin >> f >> s;
//        f--;
//        s--;
//    }
//    
//    int ans = N;
//    vector<bool> available(M, true);
//    vector<int> cereal(N, -1);
//    for (int i = 0; i < N; i++) {
//        if (available[favorites[i].first]) {
//            available[favorites[i].first] = false;
//            cereal[i] = favorites[i].first;
//        }
//        else if (available[favorites[i].second]) {
//            available[favorites[i].second] = false;
//            cereal[i] = favorites[i].second;
//        }
//        else ans--;
//    }
//    cout << ans << "\n";
//    
//    for (int i = 0; i < N-1; i++) {
//        ans--;
//        available[cereal[i]] = true;
//        for (int j = i+1; j < N; j++) {
//            
//        }
//    }
//}
