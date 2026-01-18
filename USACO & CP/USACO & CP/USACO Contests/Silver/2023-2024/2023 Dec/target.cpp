//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int T, C; cin >> T >> C;
//    set<int> targets;
//    
//    while(T--) {
//        int t; cin >> t;
//        targets.insert(t);
//    }
//    
//    string commands; cin >> commands;
//    
//    map<int, int> hit, // time -> target
//    time; // taget -> time
//    int pos = 0;
//    for (int i = 0; i < C; i++) {
//        if (commands[i] == 'F') {
//            if (targets.count(pos) && !time.count(pos)) {
//                hit[i] = pos;
//                time[pos] = i;
//            }
//        }
//        else pos += (commands[i] == 'L' ? -1 : 1);
//    }
//    
//    int ans = (int) time.size();
//    map<int, set<int>> right, add;
//    for (int i = C-1; i >= 0; i--) {
//        if (hit.count(i)) {
//            int hit_pos = hit[i];
//            hit.erase(i);
//            time.erase(hit_pos);
//            
//            for (int j = -2; j <= 2; j++) {
//                if (add[j].count(hit_pos)) {
//                    right[j].insert(hit_pos);
//                    add[j].erase(hit_pos);
//                }
//            }
//        }
//        
//        if (commands[i] == 'L') {
//            pos++;
//            
//            // L -> F
//            ans = max(ans, (int) (hit.size() + right[1].size() + (targets.count(pos) && !time.count(pos) && !right[1].count(pos))));
//            // L -> R
//            ans = max(ans, (int) (hit.size() + right[2].size()));
//        }
//        else if (commands[i] == 'R') {
//            pos--;
//            
//            // R -> F
//            ans = max(ans, (int) (hit.size() + right[-1].size() + (targets.count(pos) && !time.count(pos) && !right[-1].count(pos))));
//            
//            // R -> L
//            ans = max(ans, (int) (hit.size() + right[-2].size()));
//        }
//        else {
//            // F -> R
//            ans = max(ans, (int) (hit.size() + right[1].size()));
//            
//            // F -> L
//            ans = max(ans, (int) (hit.size() + right[-1].size()));
//            
//            for (int j = -2; j <= 2; j++) {
//                if (targets.count(pos + j)) {
//                    (time.count(pos + j) ? add[j] : right[j]).insert(pos + j);
//                }
//            }
//        }
//    }
//    
//    cout << ans << "\n";
//}
