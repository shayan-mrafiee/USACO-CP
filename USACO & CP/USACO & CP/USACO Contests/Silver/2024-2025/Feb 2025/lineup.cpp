//#include <bits/stdc++.h>
//
//using namespace std;
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int N; cin >> N;
//    vector<pair<int, int>> a(N);
//    
//    for (int i = 0; i < N; i++) {
//        cin >> a[i].first;
//        a[i].second = i;
//    }
//    
//    vector<pair<int, int>> b = a;
//    sort(b.rbegin(), b.rend());
//
//    vector<bool> should_add(N);
//    vector<int> moves(N+1);
//    for (int i = N-1; i >= 0; i--) {
//        if (moves[a[i].first] == 1) {
//            should_add[i] = true;
//        }
//        for (int j = a[i].first-1; moves[j] < 2 && j >= 1; j--)
//            moves[j]++;
//    }
//    
//    for (auto [n, i] : b) {
//        if (!should_add[i]) continue;
//        auto loc = max_element(a.begin() + i, a.end());
//        int mx = loc->first;
//        a.erase(loc);
//        for (int j = i-1; j >= 0; j--) {
//            if (a[j].first > mx) {
//                a.insert(a.begin()+j+1, {mx, i});
//                break; 
//            }
//        }
//        if (a.size() < N) a.insert(a.begin(), {mx ,i});
//        break;
//    }
//    
//    vector<int> suffix_max(N); suffix_max.back() = a.back().first;
//    for (int i = N-2; i >= 0; i--) {
//        suffix_max[i] = max(suffix_max[i+1], a[i].first);
//    }
//    
//    vector<int> ans;
//    for (int i = 0; i < N; i++) {
//        if (a[i].first == suffix_max[i])
//            ans.push_back(a[i].first);
//    }
//    
//    for (int i = 0; i < ans.size()-1; i++)
//        cout << ans[i] << ' ';
//    cout << ans.back() << "\n";
//}
//
//int main() {
//    int T; cin >> T;
//    while (T--) {
//        solve();
//    }
//}
