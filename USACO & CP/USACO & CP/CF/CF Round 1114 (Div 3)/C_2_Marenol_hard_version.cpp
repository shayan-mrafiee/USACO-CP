#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    vector<int> indices_a[2] = {}, indices_b[2] = {};
    
    for (int i = 0; i < n; i++) {
        char c; cin >> c;
        if (c == '1') {
            indices_a[i & 1].push_back(i);
        }
    }
    for (int i = 0; i < n; i++) {
        char c; cin >> c;
        if (c == '1') {
            indices_b[i & 1].push_back(i);
        }
    }

    if (indices_a[0].size() != indices_b[0].size() || indices_a[1].size() != indices_b[1].size()) {
        cout << "-1\n";
        return;
    }

    ll ans = 0; 
    for (int b = 0; b < 2; b++) {
        for (int i = 0; i < indices_a[b].size(); i++) {
            ans += abs(indices_a[b][i] - indices_b[b][i]) / 2; 
        }
    }

    cout << ans << "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}


// for F:
// the order of the input does not matter 
// a, b, c, d --> b, a, d, c => order does not matter 
// there is one value of a_i such that each b_i ^ a_i would restore a with one zero in the place of a_i
// e.g. if the value is a_1, then applying the xors results in {0, a_2, a_3, ..., a_n} in some order 

// first check if the sorted lists match. if so, answer YES otherwise: 
// make a function to help with checking bool check(int idx)
// have a set visited 
// iterate over b:
    // if b[i] in visited: check(i) || check(b.index(a[i] xor b[i]))
    // else if (a[1] xor b[i]) in a: add (a[1] xor b[i]) to visited 
// if nothing was added to visited: check(1) 