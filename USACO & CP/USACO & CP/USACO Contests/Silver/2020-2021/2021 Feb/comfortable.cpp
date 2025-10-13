//#include <bits/stdc++.h>
//
//using namespace std;
//
//map<pair<int, int>, int> neighbors;
//map<pair<int, int>, bool> exists;
//int ans = 0;
//void add_neighbors(int x, int y);
//
//void add_cow(int x, int y) {
//    exists[make_pair(x, y)] = true;
//    
//    if (neighbors[make_pair(x, y)] == 3) add_neighbors(x, y);
//    
//    for (int i : {1, -1}) {
//        if (++neighbors[make_pair(x+i, y)] == 3 && exists[make_pair(x+i, y)]) add_neighbors(x+i, y);
//        if (++neighbors[make_pair(x, y+i)] == 3 && exists[make_pair(x, y+i)]) add_neighbors(x, y+i);
//    }
//}
//
//pair<int, int> find_empty(int x, int y) {
//    if (neighbors[make_pair(x, y)] != 3) goto skip;
//    
//    for (int i : {-1, 1}) {
//        if (!exists[make_pair(x+i, y)]) return {x+i, y};
//        if (!exists[make_pair(x, y+i)]) return {x, y+i};
//    }
//    
//    skip:
//    ans--;
//    return {};
//}
//
//void add_neighbors(int x, int y) {
//    ans++;
//    
//    pair<int, int> empty = find_empty(x, y);
//    
//    add_cow(empty.first, empty.second);
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    
//    int N; cin >> N;
//    
//    while(N--) {
//        int x, y; cin >> x >> y;
//        if (exists[make_pair(x, y)]) ans--;
//        else add_cow(x, y);
//        
//        cout << ans << "\n";
//    }
//}
