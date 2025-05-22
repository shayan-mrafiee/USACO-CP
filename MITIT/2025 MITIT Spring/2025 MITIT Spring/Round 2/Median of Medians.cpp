#include <bits/stdc++.h>

using namespace std;

int median(vector<int> v) {
    sort(v.begin(), v.end());
    int n = v.size();
    return v[(n+1)/2];
}

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

void solve() {
    int N, M; cin >> N >> M;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        v.push_back(0); v.push_back(1); v.push_back(3);
    }
    sort(v.begin(), v.end());
    
    
}

int main() {
    int T; cin >> T;
    while(T--)
        solve();
}
