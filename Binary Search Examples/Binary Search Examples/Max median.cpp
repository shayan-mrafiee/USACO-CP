//#include <bits/stdc++.h>
//
//using namespace std;
//
//int max_med(int low, int high, function<bool(int)> f) {
//    low--;
//    while (low < high) {
//        int mid = low + (high - low + 1)/2;
//        if (f(mid))
//            low = mid;
//        else
//            high = mid-1;
//    }
//    return low;
//}
//
//int main() {
//    int n, k; cin >> n >> k;
//    vector<int> a (n);
//    for (int &i : a) cin >> i;
//    sort(a.begin(), a.end());
//    a.erase(a.begin(), a.begin() + n/2);
//    n = a.size();
//    cout << max_med(1, 2e9, [&](int x) {
//        long long needed = 0;
//        for (int i = 0; i < n; i++)
//            needed += max(0, x - a[i]);
//        return needed <= k;
//    }) << endl;
//}
