//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int>> friends;
//vector<int> grp;
//bool possible = true;
//void dfs(int pupil, int group) {
//    if (grp[pupil] != 0) return;
//    
//    grp[pupil] = group;
//    int other = (group == 1) ? 2 : 1;
//    
//    for (int i : friends[pupil]) {
//        if (grp[i] == grp[pupil]) {
//            possible = false;
//            return; 
//        }
//        dfs(i, other);
//    }
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    friends = vector<vector<int>>(n);
//    grp = vector<int>(n, 0);
//    
//    for (int i = 0; i < m; i++) {
//        int a, b; cin >> a >> b;
//        friends[a-1].push_back(b-1);
//        friends[b-1].push_back(a-1);
//    }
//    
//    for (int i = 0; i < n; i++) {
//        dfs(i, 1);
//        if (!possible) {
//            cout << "IMPOSSIBLE\n";
//            return 0;
//        }
//    }
//    
//    for (int i : grp)
//        cout << i << ' ';
//    cout << endl;
//}
