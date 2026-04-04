#include <bits/stdc++.h>

using namespace std;
using ll = long long; 

int main() {
    int N; cin >> N;
    vector<int> C(N);

    for (int &i : C) cin >> i; 

    ll U = 0; 
    ll mx = 0; 
    for (int i = 1; i < N; i++) {
        U += max(0LL, 1LL*C[i-1] - C[i]);
    }
    
    ll ans = U; 
    if (N > 1) {
        ans = min(ans, U-(C[0] - C[1]));
        ans = min(ans, U-(C[N-2] - C[N-1]));
    }

    cout << ans << "\n";
}