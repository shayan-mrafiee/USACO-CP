//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("berries.in", "r", stdin);
//    freopen("berries.out", "w", stdout);
//    
//    int N, K; cin >> N >> K;
//    vector<int> B(N);
//    
//    int M = 0;
//    for (int &i : B) {
//        cin >> i;
//        M = max(i, M);
//    }
//    
//    int best = 0;
//    for (int b = 1; b <= M; b++) {
//        int full = 0;
//        for (int &i : B) full += i/b;
//        
//        if (full < K/2) break;
//        
//        if (full >= K) {
//            best = max(best, b * K/2);
//            continue;
//        }
//        
//        sort(all(B), [b](const int &a, const int &c) {
//            return (a % b) > (c % b);
//        });
//        
//        int cur = b * (full - K/2);
//        
//        for (int i = 0; i < N && i + full < K; i++) cur += B[i] % b;
//        
//        best = max(best, cur);
//    }
//    
//    cout << best << "\n";
//}
