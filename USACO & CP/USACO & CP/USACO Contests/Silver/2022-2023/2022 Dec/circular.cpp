//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//const int MAX = 5000001;
//int min_turns[MAX] = {0, 1};
//bool is_composite[MAX] = {};
//int max_mod4[] = {2, 1, 2, 3};
//
//void solve() {
//    int N; cin >> N;
//    int ans = MAX;
//    for (int i = 0; i < N; i++) {
//        int a; cin >> a;
//        if (min_turns[a]/2 < ans/2) ans = min_turns[a];
//    }
//    
//    cout << (ans & 1 ? "Farmer John\n" : "Farmer Nhoj\n");
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    for (int i = 2; i < MAX; i++) {
//        if (!is_composite[i]) {
//            for (ll j = i; j < MAX; j += i) {
//                is_composite[j] = true;
//            }
//            max_mod4[i % 4] = i;
//        }
//        
//        min_turns[i] = (i - max_mod4[i % 4])/2 + 1;
//    }
//    
//    int T; cin >> T;
//    while (T--) solve();
//}
