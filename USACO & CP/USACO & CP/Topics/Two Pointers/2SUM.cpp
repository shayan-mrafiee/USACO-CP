//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n, x; cin >> n >> x;
//    vector<pair<int, int>> arr(n);
//    
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i].first;
//        arr[i].second = i+1;
//    }
//    
//    sort(arr.begin(), arr.end());
//    int r = n-1, l = 0;
//    while(r > l) {
//        if (arr[l].first + arr[r].first == x) {
//            cout << arr[l].second << ' ' << arr[r].second << "\n";
//            return 0;
//        }
//        else if (arr[l].first + arr[r].first < x) l++;
//        else r--;
//    }
//    
//    cout << "IMPOSSIBLE\n";
//}
