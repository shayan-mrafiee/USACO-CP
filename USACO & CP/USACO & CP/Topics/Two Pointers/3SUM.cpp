//#include <bits/stdc++.h>
// 
//using namespace std;
//using unt = unsigned int;
// 
//struct element {
//    unt value;
//    int indx;
//};
// 
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n; unt x; cin >> n >> x;
//    vector<element> arr(n);
//    
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i].value;
//        arr[i].indx = i+1;
//    }
//    
//    sort(arr.begin(), arr.end(), [](const element &a, const element &b) {
//        return a.value < b.value;
//    });
//    
//    for (int i = 0; i < n; i++) {
//        int l = 0, r = n-1;
//        unt search = x - arr[i].value;
//        while(l < r) {
//            if (l == i) {
//                l++;
//                continue;
//            }
//            if (r == i) {
//                r--;
//                continue;
//            }
//            
//            if (arr[l].value + arr[r].value == search) {
//                cout << arr[i].indx << ' ' << arr[l].indx << ' ' << arr[r].indx << "\n";
//                return 0;
//            }
//            
//            else if (arr[l].value + arr[r].value < search) l++;
//            else r--;
//        }
//    }
//    
//    cout << "IMPOSSIBLE\n";
//}
