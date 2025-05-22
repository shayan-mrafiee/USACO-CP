#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, Q; cin >> N >> Q;
    int blocks = 0;
    vector<vector<int>> Xs(N, vector<int>(N)), Ys, Zs;
    Ys = Zs = Xs;
    
    while(Q--) {
        int x, y, z;
        cin >> x >> y >> z;
        Xs[y][z]++;
        Ys[x][z]++;
        Zs[x][y]++;
        
        blocks += (Xs[y][z] == N) + (Ys[x][z] == N) + (Zs[x][y] == N);
        
        cout << blocks << "\n";
    }
}
