//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    int n, t; cin >> n >> t;
//    vector<int> books (n);
//    for (int &a : books) cin >> a;
//    
//    int left = 0, right = 0, ans = 0;
//    ll sum = 0;
//    while(right < n) {
//        sum += books[right];
//        while (sum > t) {
//            sum -= books[left];
//            left++;
//        }
//        
//        ans = max(ans, right - left + 1);
//        right++;
//    }
//    
//    cout << ans << "\n";
//}
