//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("planting.in", "r", stdin);
//    freopen("planting.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<int> deg(N);
//    int max_deg = 0;
//    
//    for (int i = 0; i < N-1; i++) {
//        int a, b; cin >> a >> b;
//        deg[--a]++;
//        deg[--b]++;
//        
//        max_deg = max({max_deg, deg[a], deg[b]});
//    }
//    
//    cout << max_deg + 1 << "\n";
//}
