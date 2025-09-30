//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N, K; cin >> N >> K;
//    vector<set<int>> positions(N);
//    vector<int> order(N);
//    
//    for (int i = 0; i < N; i++) {
//        order[i] = i;
//        positions[i].insert(i);
//    }
//    
//    while(K--) {
//        int a, b; cin >> a >> b;
//        swap(order[--a], order[--b]);
//        positions[order[a]].insert(a);
//        positions[order[b]].insert(b);
//    }
//    
//    for (int i = 0; i < N; i++) {
//        for (int j : positions[order[i]]) positions[i].insert(j);
//    }
//    for (int k = 0; k < N; k++) {
//        if (order[k] == k) continue;
//        for (int i = 0; i < N; i++) {
//            for (int j : positions[order[i]]) positions[i].insert(j);
//        }
//    }
//    
//    for (int i = 0; i < N; i++) {
//        cout << positions[i].size() << "\n";
//    }
//}
