//#include <iostream>
//#include <map>
//#include <set>
//#include <vector>
// 
//using namespace std;
// 
//int main() {
//    int n, x; cin >> n >> x;
//    vector<int> nums (n);
//    for (int i = 0; i < n; i++) cin >> nums[i];
//    
//    map<int, int> mp;
//    
//    for (int i = 0; i < n; i++) {
//        if (mp.count(x - nums[i])) {
//            cout << i+1 << ' ' << mp[x - nums[i]] << endl;
//            return 0;
//        }
//        mp[nums[i]] = i+1;
//    }
//    
//    cout << "IMPOSSIBLE\n";
//}
