//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//int main() {
//    int N, M; cin >> N;
//    vector<int> W(N);
//    for (int &i : W) cin >> i;
//    cin >> M;
//    vector<pair<ll, int>> c(M);
//    // (T, K)
//    for (int i = 0; i < M; i++) { // K
//        cin >> c[i].second;
//    }
//    for (int i = 0; i < M; i++) { // T
//        cin >> c[i].first;
//    }
//    
//    sort(all(c));
//    int ans = 0;
//    if (1LL*N*M <= 1000000) {
//        
//        ll cur_weight = 0;
//        int cur_boxes = 0;
//        int l = 0;
//        for (int w : W) {
//            cur_weight += w;
//            cur_boxes++;
//            bool possible = false;
//            for (auto [T, K] : c) {
//                if (T >= cur_weight && K >= cur_boxes) {
//                    possible = true;
//                    break;
//                }
//            }
//            if (!possible) {
//                ans++;
//                cur_weight = w;
//                cur_boxes = 1;
//            }
//        }
//        if (cur_boxes) ans++;
//    }
//    
//    else {
//        vector<pair<ll, int>> carts;
//        for (int i = 0; i < M; i++) {
//            if (i+1 < M && c[i].first == c[i+1].first && c[i].second <= c[i+1].second)
//                continue;
//            carts.push_back(c[i]);
//        }
//        
//        M = carts.size();
//        ll cur_weight = 0;
//        int cur_boxes = 0;
//        int l = 0;
//        for (int w : W) {
//            l = lower_bound(carts.begin()+l, carts.end(), make_pair(cur_weight+w, cur_boxes+1)) - carts.begin();
//            if (l == M) {
//                ans++;
//                cur_boxes = 1;
//                cur_weight = w;
//                l = 0;
//                continue;
//            }
//            l = lower_bound(carts.begin()+l, carts.end(), make_pair(1LL*carts[l].first, cur_boxes+1)) - carts.begin();
//            if (l == M) {
//                ans++;
//                cur_boxes = 1;
//                cur_weight = w;
//                l = 0;
//            }
//            else if (carts[l].second < cur_boxes+1) {
//                ans++;
//                cur_boxes = 1;
//                cur_weight = w;
//                l = 0;
//            }
//            else {
//                cur_boxes++;
//                cur_weight += w;
//            }
//        }
//        if (cur_boxes) ans++;
//    }
//    cout << ans << "\n";
//}
