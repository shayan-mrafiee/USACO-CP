//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//    string s; cin >> s;
//    vector<int> As = {0};
//    for (char c : s) {
//        if (c == 'B') As.push_back(0);
//        else
//            As[As.size()-1]++;
//    }
//    
//    sort(As.begin(), As.end());
//    
//    cout << accumulate(As.begin(), As.end(), 0) - As[0] << endl; 
//}
//
//int main() {
//    int t; cin >> t;
//    while (t--)
//        solve();
//}
