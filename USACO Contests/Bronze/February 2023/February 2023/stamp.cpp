#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

vector<string> rotate(vector<string> stamp) {
    int K = stamp.size();
    vector<string> v (K);
    for (int i = 0; i < K; i++) {
        string s;
        for (int j = K - 1; j >= 0; j--) {
            s.push_back(stamp[j][i]);
        }
        v[i] = s;
    }
    return v;
}
bool are_equal(vector<string> section, vector<string> stamp) {
    
    int K = section.size();
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < K; j++) {
            if (section[i][j] == '.' && stamp[i][j] == '*') return false;
        }
    }
    return true;
}

void use(vector<string> stamp, vector<string> &grid, int i, int j) {
    int K = stamp.size();
    for (int k = i; k < i + K; k++) {
        for (int h = j; h < j + K; h++) {
            grid[k][h] = (grid[k][h] == '.') ? stamp[k - i][h - j] : grid[k][h];
        }
    }
}

void solve() {
    int N; cin >> N;
    vector<string> grid (N);
    int ink = 0;
    for (int i = 0; i < N; i++) {
        cin >> grid[i];
        for (char c : grid[i]) ink += (c == '*') ? 1 : 0;
    }
    int K; cin >> K;
    vector<string> stamp (K);
    for (int i = 0; i < K; i++)
        cin >> stamp[i];
    
    vector<string> test (N, string(N, '.'));
    
    for (int r = 0; r < 4; r++) {
        for (int i = 0; i <= N - K; i++) {
            for (int j = 0; j <= N - K; j++) {
                vector<string> section (K, string(K,'.'));
                for (int k = i; k < i + K; k++) {
                    for (int h = j; h < j + K; h++) {
                        section[k-i][h-j] = grid[k][h];
                    }
                }
                
                if (are_equal(section, stamp)) use(stamp, test, i, j);
            }
        }
        stamp = rotate(stamp);
    }

    cout << ((test == grid) ? "YES" : "NO") << endl;
    
}

int main() {
    int T; cin >> T;
    for (int i = 0; i < T; i++)
        solve();
}
