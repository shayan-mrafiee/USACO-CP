//https://lightoj.com/problem/points-in-rectangle
#include <bits/stdc++.h>
using namespace std;

struct BIT {
    int bit[1001][1001] = {}; 
    
    void add_point(int x, int y) {
        int i = x; 
        while (i <= 1000) {
            int j = y; 
            while (j <= 1000) {
                bit[i][j]++; 
                j |= j+1; 
            }
            i |= i+1; 
        }
    }
    
    int get_sum(int x, int y) {
        int sum = 0;
        int i = x; 
        while (i >= 0) {
            int j = y; 
            while (j >= 0) {
                sum += bit[i][j]; 
                j = (j & (j+1)) - 1; 
            }
            i = (i & (i+1)) - 1;
        }
        
        return sum; 
    }
    
    int get_sum(int x1, int y1, int x2, int y2) {
        int sum = get_sum(x2, y2); 
        if (x1) sum -= get_sum(x1-1, y2); 
        if (y1) sum -= get_sum(x2, y1-1); 
        if (x1 && y1) sum += get_sum(x1-1, y1-1); 
        return sum; 
    }
    
    bool has_point(int x, int y) {
        return get_sum(x, y, x, y); 
    }
};

void solve() {
    BIT rect; 
    int q; cin >> q; 
    
    while (q--) {
        bool type; cin >> type; 
        if (type == 0) {
            int x, y; cin >> x >> y;
            if (!rect.has_point(x, y))
                rect.add_point(x, y); 
        }
        else {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2; 
            cout << rect.get_sum(x1, y1, x2, y2) << "\n"; 
        }
    }
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int T; cin >> T; 
    for (int i = 1; i <= T; i++) {
        cout << "Case " << i << ":\n"; 
        solve(); 
    }
}
