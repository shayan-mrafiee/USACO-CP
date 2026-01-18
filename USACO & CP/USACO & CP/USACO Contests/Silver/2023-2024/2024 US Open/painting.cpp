//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//using pii = pair<int, int>;
//#define all(x) x.begin(), x.end()
//
//int operator - (pii &a, pii &b) { return a.first - b.first + a.second - b.second; }
//
//map<int, vector<int>> hor, ver;
//map<pii, int> idx; // 1-indexed, negative means already visited
//int visited = 0, P;
//
//int main() {
//    int N; cin >> N >> P;
//    vector<pii> posts(P);
//    vector<pair<pii, pii>> cows(N);
//    
//    for (auto &[x, y] : posts) {
//        cin >> x >> y;
//        hor[y].push_back(x);
//        ver[x].push_back(y);
//    }
//    sort(all(posts));
//    
//    for (int i = 0; i < P; i++) {
//        idx[posts[i]] = i+1;
//    }
//    for (auto &[_, v] : hor) sort(all(v));
//    for (auto &[_, v] : ver) sort(all(v));
//    
//    vector<int> path = {1};
//    idx[posts[0]] = -1;
//    bool vertical = false;
//    bool decr = true;
//    while (path.size() < P) {
//        auto [x, y] = posts.back();
//        vector<int> pos;
//        if (vertical) {
//            int i = lower_bound(all(ver[x]), y) - ver[x].begin();
//            if (i && idx[make_pair(x, ver[x][i-1])] > 0)
//                pos.push_back(ver[x][i-1]);
//            if (i+1 < ver[x].size() && idx[make_pair(x, ver[x][i+1])] > 0) pos.push_back(ver[x][i+1]);
//            if (decr) {
//                int &next = idx[make_pair(x, pos.front())];
//                path.push_back(next);
//                next = -next;
//            }
//            else {
//                int &next = idx[make_pair(x, pos.back())];
//                path.push_back(next);
//                next = -next;
//            }
//        }
//        else {
//            int i = lower_bound(all(hor[y]), x) - hor[y].begin();
//            if (i && idx[make_pair(hor[y][i-1], y)] > 0)
//                pos.push_back(hor[y][i-1]);
//            if (i+1 < hor[y].size() && idx[make_pair(hor[y][i+1], y)] > 0) pos.push_back(hor[y][i+1]);
//            if (decr) {
//                int &next = idx[make_pair(pos.front(), y)];
//                path.push_back(next);
//                next = -next;
//            }
//            else {
//                int &next = idx[make_pair(pos.back(), y)];
//                path.push_back(next);
//                next = -next;
//            }
//        }
//        vertical = !vertical;
//        decr = posts[path.back()-1] - posts[path[path.size()-2]-1] < 0;
//    }
//    
//    vector<ll> prefix_dist(P);
//    for (int i = 1; i < P; i++) {
//        int dist = abs(posts[path[i]-1] - posts[path[i-1]-1]);
//        prefix_dist[i] = prefix_dist[i-1] + dist;
//    }
//    
//    
//}
