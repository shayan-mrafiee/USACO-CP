//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    string s; cin >> s;
//    vector<vector<int>> prefix (s.size() + 1, vector<int>(26, 0));
//    for (int i = 1; i <= s.size(); i++) {
//        prefix[i] = prefix[i-1];
//        prefix[i][s[i-1] - 'a']++;
//    }
//    
//    int q; cin >> q;
//    while(q--) {
//        int l, r; cin >> l >> r;
//        int cnt = 0;
//        for (int i = 0; i < 26; i++) {
//            cnt += (prefix[r][i] - prefix[l-1][i] > 0);
//        }
//        
//        if (r - l == 0 || s[l-1] != s[r - 1] || cnt >= 3)
//            cout << "Yes\n";
//        else
//            cout << "No\n";
//    }
//}
