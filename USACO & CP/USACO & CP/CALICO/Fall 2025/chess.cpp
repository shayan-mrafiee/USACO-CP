#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

int solve(int N, int M, int K, vector<tuple<char, int, int>> P) {
    // N: Number of rows of the board
    // M: Number of columns of the board
    // K: Number of pieces
    // P: list of tuples. Each tuple contains (piece type, x position, y position)

    // YOUR CODE HERE
	
	auto can_hit = [&](tuple<char, int, int> p1, tuple<char, int, int> p2) {
		if (get<0>(p1) == 'Q' || get<0>(p1) == 'R') {
			if (get<1>(p1) == get<2>(p2)) return true; 
			if (get<2>(p1) == get<2>(p2)) return true; 
		} 
		return (abs(get<1>(p1) - get<1>(p2)) == abs(get<2>(p1) - get<2>(p2))); 
	}; 

	int ans = 0; 
	for (int i = 0; i < K-1; i++) {
		for (int j = i+1; j < K; j++) {
			ans += can_hit(P[i], P[j]) + can_hit(P[j], P[i]);
		}
	}

    return ans; 
}

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m; cin >> n >> m;
		int k; cin >> k;
		vector<tuple<char, int, int>> pieces;
		while (k--) {
			char piece; int x, y; cin >> piece >> x >> y;
            pieces.emplace_back(piece, x, y);
		}
	    cout << solve(n, m, k, pieces) << "\n";
	}
}
