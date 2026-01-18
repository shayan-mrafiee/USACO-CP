//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N, K; cin >> N >> K;
//    vector<int> a(K), b(K);
//    
//    map<int, int> indx_in_a;
//    vector<bool> absent(N, true);
//    
//    for (int i = 0; i < K; i++) {
//        cin >> a[i];
//        indx_in_a[a[i]] = i;
//        absent[a[i]-1] = false;
//    }
//    for (int i = 0; i < K; i++) {
//        cin >> b[i];
//        absent[b[i]-1] = false;
//    }
//    
//    int ans = 0;
//    int pre = accumulate(all(absent), 0);
//    for (int j = 0; j < 2; j++) {
//        vector<int> cor(K, pre);
//        for (int i = 0; i < K; i++) {
//            if (indx_in_a.find(b[i]) == indx_in_a.end()) continue;
//            cor[(indx_in_a[b[i]] - i + K) % K]++;
//        }
//        
//        for (int i : cor) {
//            ans = max(ans, i);
//        }
//        reverse(all(b));
//    }
//    
//    cout << ans << "\n";
//}
