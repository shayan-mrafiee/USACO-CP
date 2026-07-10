//https://cses.fi/problemset/task/3221
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k, x, a, b, c; 
    cin >> n >> k >> x >> a >> b >> c; 
    vector<int> arr(n); arr[0] = x; 

    for (int i = 1; i < n; i++) {
        arr[i] = (1LL * a * arr[i-1] + b) % c; 
    }

    int ans = 0, l = 0; 
    deque<int> q; // queue for minimums 

    for (int r = 0; r < n; r++) {
        while (!q.empty() && q.back() > arr[r]) q.pop_back(); 
        q.push_back(arr[r]);
        if (r - l + 1 == k) {
            ans ^= q.front(); 
            if (q.front() == arr[l++]) q.pop_front(); 
        }
    }

    cout << ans << '\n'; 
}