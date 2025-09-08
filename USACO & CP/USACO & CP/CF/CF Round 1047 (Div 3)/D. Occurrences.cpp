//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n; cin >> n;
//    vector<int> b(n);
//    map<int, int> occurences;
//    
//    for (int &i : b) {
//        cin >> i;
//        occurences[i]++;
//    }
//    
//    for (auto &[i, o] : occurences) {
//        if (o % i) {
//            cout << "-1\n";
//            return;
//        }
//    }
//    
//    int max = 1;
//    occurences = {};
//    map<int, int> match;
//    for (int &i : b) {
//        if (!match.count(i)) match[i] = max++;
//    }
//    for (int &i : b) {
//        if (occurences[match[i]] < i) {
//            occurences[match[i]]++;
//            cout << match[i] << ' ';
//        }
//        else {
//            cout << max << " ";
//            match[i] = max++;
//        }
//    }
//    cout << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
