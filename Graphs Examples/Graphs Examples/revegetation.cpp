//#include <iostream>
//#include <cstdio>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    freopen("revegetate.in", "r", stdin);
//    freopen("revegetate.out", "w", stdout);
//    
//    int N, M; cin >> N >> M;
//    string field (N, '0');
//    vector<vector<int>> grps (N);
//    for (int i = 0; i < M; i++) {
//        int a, b; cin >> a >> b;
//        grps[a-1].push_back(b-1);
//        grps[b-1].push_back(a-1);
//    }
//    
//    for (int i = 0; i < N; i++) {
//        int s = 1;
//        bool cont = true;
//        while (cont) {
//            cont = false;
//            for (int n : grps[i])
//                if (s + '0' == field[n]) {
//                    cont = true;
//                    s++;
//                    break;
//                }
//        }
//        field[i] = s + '0';
//    }
//    
//    cout << field << endl; 
//}
