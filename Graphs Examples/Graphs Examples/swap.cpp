//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    freopen("swap.in", "r", stdin);
//    freopen("swap.out", "w", stdout);
//    
//    int N, K; cin >> N >> K;
//    pair<int, int> A, B;
//    cin >> A.first >> A.second >> B.first >> B.second;
//    vector<int> v (N);
//    for (int i = 0; i < N; i++)
//        v[i] = i+1; 
//    vector<vector<int>> changes = {v};
//    int n = 0;
//    do {
//        n++;
//        reverse(v.begin() + A.first - 1, v.begin() + A.second);
//        reverse(v.begin() + B.first - 1, v.begin() + B.second);
//        changes.push_back(v);
//    } while (n <= K && changes[0] != v);
//    v.pop_back();
//    for (int i : changes[K % n]) cout << i << endl; 
//}
