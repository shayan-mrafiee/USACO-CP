//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    freopen("cowdance.in", "r", stdin);
//    freopen("cowdance.out", "w", stdout);
//    
//    int N, T; cin >> N >> T;
//    vector<int> d(N);
//    for (int &i : d) cin >> i;
//    
//    auto time = [&](int K) {
//        vector<int> stage(K);
//        for (int i = 0; i < K; i++) stage[i] = d[i];
//        
//        int t = 0;
//        for (int i = K; i < N;) {
//            int minimum = *min_element(all(stage));
//            t += minimum;
//            for (int &duration : stage) {
//                duration -= minimum;
//                if (duration == 0 && i < N) duration = d[i++];
//            }
//        }
//        
//        t += *max_element(all(stage));
//        return t;
//    };
//    
//    int min_k = N, l = 1, r = N;
//    while(l <= r) {
//        int K = l + (r-l)/2;
//        if (time(K) <= T) {
//            min_k = K;
//            r = K-1;
//        }
//        
//        else l = K+1;
//    }
//    
//    cout << min_k << "\n"; 
//}
