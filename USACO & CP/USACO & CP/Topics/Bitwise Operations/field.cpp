//#include <bits/stdc++.h> 
//
//using namespace std;
//
//int main() {
//    int C, N; cin >> C >> N; 
//    vector<int> teams(N); 
//    vector<int> dist(1 << C, -1); 
//    queue<int> q; 
//    
//    for (int &team : teams) {
//        string s; cin >> s; 
//        for (int i = 0; i < C; i++) team += (s[i] == 'G') * (1 << i); 
//        dist[team] = 0; 
//        q.push(team); 
//    }
//    
//    while(!q.empty()) {
//        int u = q.front(); q.pop(); 
//        for (int i = 0; i < C; i++) {
//            int v = u ^ (1 << i); 
//            if (dist[v] != -1) continue; 
//            dist[v] = dist[u] + 1; 
//            q.push(v); 
//        }
//    }
//    
//    for (int &team : teams) {
//        cout << C - dist[team ^ ((1 << C) - 1)] << "\n"; 
//    }
//}
