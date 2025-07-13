//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n, k; cin >> n >> k;
//    vector<int> arr(n);
//    
//    ll lo, hi = 0;
//    for (int &x : arr) {
//        cin >> x;
//        hi += x;
//    }
//    lo = *max_element(all(arr));
//    
//    auto possible = [&](ll maximum) {
//        int subarrays = 0;
//        ll cur_sum = 0;
//        for (int &x : arr) {
//            cur_sum += x;
//            if (cur_sum > maximum) {
//                subarrays++;
//                cur_sum = x;
//            }
//        }
//        subarrays += (cur_sum > 0);
//        return (subarrays <= k);
//    };
//    
//    ll min_max = hi;
//    while(lo <= hi) {
//        ll maximum = lo + (hi-lo)/2;
//        if (possible(maximum)) {
//            min_max = maximum;
//            hi = maximum-1;
//        }
//        else lo = maximum+1;
//    }
//    
//    cout << min_max << "\n";
//}
