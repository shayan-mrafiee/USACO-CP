#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);
    
    bitset<100000> b;
    int N; cin >> N; 
    vector<int> idx(N);
    int ans = 0; 

    for (int i = 1; i <= 2*N; i++) {
        int id; cin >> id; id--; 
        if (idx[id]) {
            ans += (b >> idx[id]).count();
            b[idx[id]-1] = 0; 
        }
        else {
            idx[id] = i;
            b[i-1] = 1; 
        }
    }

    cout << ans << "\n";
}