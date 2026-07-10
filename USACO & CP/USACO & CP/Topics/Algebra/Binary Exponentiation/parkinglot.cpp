//https://codeforces.com/problemset/problem/630/I
#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    unsigned int n; cin >> n; 
    ull ans = 6 * pow(4, n-2) + (n-3) * 9 * pow(4, n-3); 
    cout << ans << "\n";
}