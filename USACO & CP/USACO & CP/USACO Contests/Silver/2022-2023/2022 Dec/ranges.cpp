//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    
//    int N; cin >> N;
//    vector<vector<int>> diff(N, vector<int>(N));
//    vector<int> ans(N);
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = i; j < N; j++) cin >> diff[i][j];
//    }
//    
//    auto ok = [&](int start) {
//        for (int i = start; i < N; i++) {
//            int mn = ans[i], mx = ans[i];
//            for (int j = i; j < N; j++) {
//                mn = min(mn, ans[j]);
//                mx = max(mx, ans[j]);
//                if (mx - mn != diff[i][j]) return false;
//            }
//        }
//        
//        return true;
//    };
//    
//    ans.back() = 0;
//    for (int i = N-2; i >= 0; i--) {
//        ans[i] = ans[i+1] + diff[i][i+1];
//        if (!ok(i)) ans[i] = ans[i+1] - diff[i][i+1];
//    }
//    
//    for (int i = 0; i < N; i++) {
//        cout << ans[i] << (i == N-1 ? "\n" : " ");
//    }
//}
