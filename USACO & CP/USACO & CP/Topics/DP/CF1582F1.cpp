#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int n; 
const int MAX_A = 500, MAX_XOR = 511;

struct BIT {
    int bit[MAX_A + 1];

    BIT() {
        for (int i = 0; i <= MAX_A; i++)
            bit[i] = n+1; 
    }

    void update(int value, int index) {
        while (value <= MAX_A) {
            bit[value] = min(bit[value], index);
            value |= value+1; 
        }
    }

    int get_min_index(int value) {
        int res = n+1; 
        while (value >= 0) {
            res = min(res, bit[value]);
            value = (value & (value + 1)) - 1;
        }
        return res; 
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n; 
    BIT xors[MAX_XOR+1] = {};
    vector<int> indices[MAX_A+1] = {};

    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        indices[a].push_back(i);
    }

    xors[0].update(0, 0);
    bitset<MAX_XOR+1> ans = 1; 
    
    for (int i = 1; i <= MAX_A; i++) {
        int max_xor = (1 << (31 - __builtin_clz(i) + 1)) - 1; 
        for (int j = 1; j <= MAX_XOR; j++) {
            if ((i ^ j) > MAX_XOR) continue; 
            int min_index = xors[i ^ j].get_min_index(i-1);
            auto it = upper_bound(all(indices[i]), min_index); 
            if (it != indices[i].end()) {
                xors[j].update(i, *it); 
                ans[j] = true; 
            }
        }
    }

    cout << ans.count() << "\n"; 
    for (int i = 0; i <= MAX_XOR; i++) {
        if (ans[i]) cout << i << ' ';
    }
}