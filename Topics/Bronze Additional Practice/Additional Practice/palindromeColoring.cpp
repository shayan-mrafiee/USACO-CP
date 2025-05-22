//#include <iostream>
//#include <algorithm>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//void solve() {
//    int n, k; string s;
//    cin >> n >> k >> s;
//    map<char, int> occurrences;
//    for (char c : s) occurrences[c]++;
//    int pairs = 0, odds = 0;
//    for (auto a : occurrences) {
//        pairs += a.second / 2;
//        odds += a.second % 2;
//    }
//    int ans = pairs/k * 2;
//    odds += pairs % k * 2;
//    ans += (odds >= k) ? 1 : 0;
//    cout << ans << endl;
//}
//
//int main() {
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
