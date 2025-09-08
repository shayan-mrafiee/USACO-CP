//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    freopen("mountains.in", "r", stdin);
//    freopen("mountains.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<pair<int, int>> mountains(N);
//    
//    for (auto &[x, y] : mountains) cin >> x >> y;
//    
//    sort(all(mountains));
//    vector<bool> can_distinguish(N, true);
//    
//    for (int i = 0; i < N; i++) {
//        if (!can_distinguish[i]) {
//            continue;
//        }
//        
//        for (int j = i-1; j >= 0; j--) {
//            int y = mountains[j].first - mountains[i].first + mountains[i].second;
//            if (y < mountains[j].second) break;
//            
//            can_distinguish[j] = false;
//        }
//        
//        for (int j = i+1; j < N; j++) {
//            int y = -mountains[j].first + mountains[i].first + mountains[i].second;
//            if (y < mountains[j].second) break;
//            
//            can_distinguish[j] = false;
//        }
//    }
//    
//    cout << count(all(can_distinguish), 1) << "\n";
//}
