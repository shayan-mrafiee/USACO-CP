//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//    int N, K;
//    cin >> N >> K;
//    vector<int> output(N);
//    for (int &i : output) cin >> i;
//    
//    auto deg1 = [&] (int l, int r) {
//        for (int i = l+1; i < r; i++)
//            if (output[i] != output[i-1]) return false;
//        
//        return true;
//    };
//    
//    auto deg2 = [&] (int l, int r) {
//        vector<pair<int, int>> blocks;
//        for (int i = l; i < r; i++) {
//            if (blocks.empty() || output[i] != blocks.back().first)
//                blocks.push_back({output[i], 1});
//            else
//                blocks.back().second++;
//        }
//        
//        if (blocks.size() <= 2) return true;
//        
//        if (blocks.size() % 2) return false;
//        
//        for (int i = 0; i < blocks.size()-2; i++) {
//            if (blocks[i] != blocks[i+2]) return false;
//        }
//        
//        return true;
//    };
//    
//    auto deg3 = [&] {
//        for (int size = 1; size <= N; size++) {
//            if (N % size) continue;
//            
//            bool ok = true;
//            for (int i = size; i < N; i++) {
//                if (output[i] != output[i % size]) {
//                    ok = false;
//                    break;
//                }
//            }
//            
//            if (ok) {
//                for (int i = 1; i <= size; i++) {
//                    if ((deg1(0, i) && deg2(i, size)) || (deg2(0, i) && deg1(i, size)))
//                        return true;
//                }
//            }
//        }
//        
//        return false;
//    };
//    
//    if (K == 1)
//        cout << "YES\n";
//    else if (K == 2)
//        cout << (deg2(0, N) ? "YES\n" : "NO\n");
//    else
//        cout << (deg3() ? "YES\n" : "NO\n"); 
//}
//
//int main() {
//    int T;  cin >> T;
//    while (T--)
//        solve();
//}
