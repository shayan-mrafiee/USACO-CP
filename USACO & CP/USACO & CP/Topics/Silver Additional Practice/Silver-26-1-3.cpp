#include <bits/stdc++.h>

using namespace std; 
using ll = long long; 
#define all(x) x.begin(), x.end()

// b[i+K] = b[i] + r[i] + r[i+1] (mod 2)

void solve() {
    int N, K; cin >> N >> K;
    string r; cin >> r; // size = N - K + 1
    int min_diff = N, min_ones = 0;
    bool is_odd = 0; // keeps track of the parity of the sum of the first K elements 
    
    for (int i = 0; i < K; i++) {
        int ones = 0, zeros = 1; 
        bool b = 0; 
        for (int j = i+K; j < N; j += K) {
            b = b ^ (r[j-K] - '0') ^ (r[j-K+1] - '0');
            ones += b;
            zeros += !b;
        }

        min_ones += min(ones, zeros);
        min_diff = min(min_diff, abs(ones - zeros));
        is_odd ^= (ones > zeros); // if ones > zeros, means we're going to switch the current b to 1 => parrity is going to change 
    }

    // if is_odd != r[0], we need to flip one b with min_diff between ones and zeros

    // minimum
    cout << min_ones + (is_odd != (r[0] - '0')) * min_diff << " ";

    // maximum
    cout << N - min_ones - (((is_odd + K) & 1) != (r[0] - '0')) * min_diff << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; cin >> T; 
    while (T--) {
        solve(); 
    }
}