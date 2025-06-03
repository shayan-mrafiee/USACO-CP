//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int N, M;
//    cin >> N >> M;
//    map<int, unordered_set<int>> beaters;
//    
//    for (int i = 0; i < N; i++) {
//        string s; cin >> s;
//        for (int j = 0; j <= i; j++) {
//            if (s[j] == 'W') {
//                beaters[j].insert(i);
//            }
//            else if (s[j] == 'L') {
//                beaters[i].insert(j);
//            }
//        }
//    }
//    
//    while(M--) {
//        int s1, s2; cin >> s1 >> s2;
//        s1--; s2--;
//        int winners = 0;
//        for (int i = 0; i < N; i++) {
//            if (beaters[s1].find(i) != beaters[s1].end() && beaters[s2].find(i) != beaters[s2].end())
//                winners++;
//        }
//        cout << winners * (2 * N - winners) << endl;
//    }
//}
