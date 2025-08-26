//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//#define p first
//#define t second
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int K, M, N; cin >> K >> M >> N;
//    vector<pair<int, int>> patches(K + M);
//    
//    for (int i = 0; i < K + M; i++) {
//        cin >> patches[i].p;
//        if (i < K) cin >> patches[i].t;
//        else patches[i].t = -1;
//    }
//    
//    sort(all(patches));
//    
//    vector<ll> v;
//    ll sum = 0;
//    int lastCow = -1;
//    
//    for (int i = 0; i < K + M; i++) {
//        if (patches[i].t == -1) {
//            if (lastCow == -1) v.push_back(sum);
//            
//            else {
//                ll cur_tastiness = 0, best_tastiness = 0;
//                int l = lastCow + 1, r = l;
//                while(r < i) {
//                    if (2 * (patches[r].p - patches[l].p) < (patches[i].p - patches[lastCow].p)) cur_tastiness += patches[r++].t;
//                    else {
//                        best_tastiness = max(cur_tastiness, best_tastiness);
//                        cur_tastiness -= patches[l++].t;
//                    }
//                }
//                
//                v.push_back(best_tastiness);
//                v.push_back(sum - best_tastiness);
//            }
//            
//            lastCow = i;
//            sum = 0;
//        }
//        
//        else sum += patches[i].t;
//    }
//    
//    v.push_back(sum);
//    sort(v.rbegin(), v.rend());
//    
//    cout << accumulate(v.begin(), v.begin() + N, 0LL) << "\n";
//}
