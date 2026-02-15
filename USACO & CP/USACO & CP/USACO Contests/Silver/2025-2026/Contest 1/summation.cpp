#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

// b[i+K] = (b[i] + r[i] + r[i+1]) % 2
void solve() {
    int N, K; cin >> N >> K; 
    string r; cin >> r; 
    int min_dif = N; 
    int min_ones = 0;
    bool is_odd = false; 

    for (int i = 0; i < K; i++) {
        int ones = 0, zeros = 1; 
        bool b = 0; 
        for (int j = i+K; j < N; j += K) {
            b = b ^ (r[j-K] - '0') ^ (r[j-K+1] - '0'); 
            ones += b; zeros += !b;
        }
        min_ones += min(ones, zeros); 
        min_dif = min(min_dif, abs(ones - zeros));
        if (ones > zeros)
            is_odd ^= 1;
    }
    // minimum
    cout << min_ones + (is_odd != (r[0] - '0')) * min_dif << " ";

    // maximum
    cout << N - min_ones - (((is_odd + K) & 1) != (r[0] - '0')) * min_dif << "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}