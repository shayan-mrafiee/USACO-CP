//#include <bits/stdc++.h>
//
//using namespace std;
//
//const string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
//
//void solve() {
//    string s, t; cin >> s >> t;
//    map<char, char> f;
//    
//    for (int i = 0; i < s.size(); i++) {
//        if (f.count(s[i]) && f[s[i]] != t[i]) {
//            cout << "-1\n"; return;
//        }
//        f[s[i]] = t[i];
//    }
//    
//    if (set<char>(t.begin(), t.end()).size() == 52 && s != t) {
//        cout << "-1\n";
//        return;
//    }
//    
//    int ans = 0;
//    for (auto &[c1, c2] : f)
//        ans += c1 != c2;
//    
//    map<char, int> in_deg;
//    for (char r : alphabet) {
//        if (f.count(r)){
//            in_deg[f[r]]++;
//        }
//    }
//    
//    map<char, char> seen;
//    for (char r : alphabet) {
//        if (seen.count(r)) continue;
//        char a = r;
//        while(!seen.count(a)) {
//            seen[a] = r;
//            if (f.count(a)) a = f[a];
//            else break;
//        }
//        
//        if (f.count(a) && f[a] != a && seen[a] == r) {
//            bool cycle = true;
//            char s = a;
//            do {
//                cycle &= in_deg[a] <= 1;
//                seen[a] = '*';
//                a = f[a];
//            } while (a != s);
//            
//            ans += cycle;
//        }
//    }
//    
//    cout << ans << "\n";
//}
//
//int main() {
//    int T; cin >> T;
//    while(T--) solve();
//}
