////Introduction to Number Theory (beginner-25-26)
//// Contest MIT^2
//#include <bits/stdc++.h>
//using namespace std;
//using ll = long long;
//const int maxN = 3e5;
//
//void solve() {
//    int n;
//    cin >> n;
//    ll a[maxN], mn = LLONG_MAX, mx = LLONG_MIN;
//    for (int i=0;i<n;i++) {
//        cin >> a[i];
//        mn = min(mn, a[i]);
//        mx = max(mx, a[i]);
//    }
//
////    for (ll d=1; d*d<=mn; d++) {
////        if (mn%d==0) {
////            for (ll x : {d, mn/d}) {
////                bool V= true;
////                bool M=false;
////                bool D =false;
////
////                for (int i = 0; i < n; i++) {
////                    ll v = a[i];
////                    if (v%x!=0 && x%v!=0) { V=false; break; }
////                    if (x%v==0) M=true;
////
////                    if (v%x==0) D=true;
////                }
////
////                if (V && M && D) { cout << x << "\n"; return; }
////            }
////
////        }
////    }
//    for (ll d=min(mn, mx/mn); d*d<=mx; d++) {
//        if (mx%d==0) {
//            for (ll x : {d, mx/d}) {
//                if (x < mn) continue;
//                bool V= true;
//                bool M=false;
//                bool D =false;
//
//                for (int i = 0; i < n; i++) {
//                    ll v = a[i];
//                    if (v%x!=0 && x%v!=0) { V=false; break; }
//                    if (x%v==0) M=true;
//
//                    if (v%x==0) D=true;
//                }
//
//                if (V && M && D) { cout << x << "\n"; return; }
//            }
//
//        }
//    }
//
//    cout << "-1\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//
//    int T;
//    cin >> T;
//
//    while (T--) {
//        solve();
//    }
//
//    return 0;
//}
