//#include <iostream>
//#include <tuple>
//#include <vector>
//#include <map>
//#include <set>
//
//using namespace std;
//
//int solve(int N, int M, int K, vector<tuple<char, int, int>> P) {
//    // N: Number of rows of the board
//    // M: Number of columns of the board
//    // K: Number of pieces
//    // P: list of tuples. Each tuple contains (piece type, x position, y position)
//
//    // YOUR CODE HERE
//    int ans = 0;
//    map<int, set<pair<int, char>>> row, column, diagonal_up, diagonal_down;
//    
//    for (auto [c, x, y] : P) {
//        row[y].insert({x, c});
//        column[x].insert({y, c});
//        diagonal_down[x+y].insert({x, c});
//        diagonal_up[x-y].insert({x, c});
//    }
//    
//    for (auto &mp : {row, column}) {
//        for (auto [_, s] : mp) {
//            vector<pair<int, char>> v(s.begin(), s.end());
//            for (int i = 0; i < v.size(); i++) {
//                if (v[i].second == 'B') continue;
//                ans += (i > 0) + (i < v.size()-1);
//            }
//        }
//    }
//    
//    for (auto &mp : {diagonal_up, diagonal_down}) {
//        for (auto [_, s] : mp) {
//            vector<pair<int, char>> v(s.begin(), s.end());
//            for (int i = 0; i < v.size(); i++) {
//                if (v[i].second == 'R') continue;
//                ans += (i > 0) + (i < v.size()-1);
//            }
//        }
//    }
//
//    return ans; 
//}
//
//int main() {
//	int t; cin >> t;
//	for (int i = 0; i < t; i++) {
//		int n, m; cin >> n >> m;
//		int k; cin >> k;
//		vector<tuple<char, int, int>> pieces;
//        for (int j = 0; j < k; j++) {
//			char piece; int x, y; cin >> piece >> x >> y;
//            pieces.emplace_back(piece, x, y);
//		}
//	    cout << solve(n, m, k, pieces) << "\n";
//	}
//}
