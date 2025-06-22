//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    freopen("angry.in", "r", stdin);
//    freopen("angry.out", "w", stdout);
//    
//    int N, K; cin >> N >> K;
//    vector<int> haybales(N);
//    for (int &x : haybales) cin >> x;
//    
//    sort(all(haybales));
//    
//    auto needed_cows = [&](int R) {
//        int first = haybales[0], cows = 1;
//        for (int i = 1; i < N; i++) {
//            if (haybales[i] - first > 2*R) {
//                cows++;
//                first = haybales[i];
//            }
//        }
//        
//        return cows;
//    };
//    
//    int l = 1, r = haybales.back() - haybales[0], min_R = 0;
//    while(l <= r) {
//        int R = l + (r-l)/2;
//        if (needed_cows(R) > K) l = R+1;
//        else {
//            min_R = R;
//            r = R-1;
//        }
//    }
//    
//    cout << min_R << "\n"; 
//}
