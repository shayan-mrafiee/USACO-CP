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
//    int C, N; cin >> C >> N;
//    vector<int> teams(N);
//    queue<pair<int, int>> q;
//    
//    for (int &t : teams) {
//        for (int i = 0, p = 1; i < C; i++, p *= 2) {
//            char c; cin >> c;
//            t += (c == 'G') * p;
//        }
//        q.push({t, 0});
//    }
//    
//    int p = (int) pow(2, C);
//    vector<int> dist(p, -1);
//    while(!q.empty()) {
//        auto [n, d] = q.front(); q.pop();
//        if (dist[n] != -1) continue;
//        dist[n] = d;
//        for (int i = 0, x = 1; i < C; i++, x *= 2) {
//            q.push({n ^ x, d+1});
//        }
//    }
//    
//    for (int &t : teams) {
//        cout << C - dist[t ^ (p-1)] << "\n";
//    }
//}
