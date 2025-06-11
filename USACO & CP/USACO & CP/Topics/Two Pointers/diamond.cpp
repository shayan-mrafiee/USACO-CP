//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    freopen("diamond.in", "r", stdin);
//    freopen("diamond.out", "w", stdout);
//    
//    int N, K;
//    cin >> N >> K;
//    vector<int> diamonds(N);
//    
//    for (int &i : diamonds) cin >> i;
//    sort(diamonds.begin(), diamonds.end());
//    
//    vector<int> prefix(N), suffix(N);
//    int l = 0, r = 0;
//    while(r < N) {
//        if (diamonds[r] - diamonds[l] > K) l++;
//        else {
//            prefix[r] = r-l+1;
//            r++;
//        }
//    }
//    
//    l = r = N-1;
//    while(l >= 0) {
//        if (diamonds[r] - diamonds[l] > K) r--;
//        else {
//            suffix[l] = r-l+1;
//            l--;
//        }
//    }
//    
//    for (int i = 1; i < N; i++) prefix[i] = max(prefix[i], prefix[i-1]);
//    for (int i = N-2; i >= 0; i--) suffix[i] = max(suffix[i], suffix[i+1]);
//    
//    int ans = 0;
//    for (int i = 0; i < N; i++) {
//        int temp = prefix[i];
//        if (i < N-1) temp += suffix[i+1];
//        ans = max(ans, temp);
//    }
//    
//    cout << ans << "\n"; 
//}
