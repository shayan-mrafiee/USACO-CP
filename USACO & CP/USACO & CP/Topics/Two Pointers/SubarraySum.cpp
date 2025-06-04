#include <bits/stdc++.h>

using namespace std;
using ll = long long; 

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
    
    int n, x; cin >> n >> x;
    vector<int> arr(n);
    
    for (int &a : arr) cin >> a;
    
    ll sum = 0;
    int l = 0, r = 0, ans = 0;
    while(r < n) {
        sum += arr[r];
        while(sum > x) {
            sum -= arr[l];
            l++;
        }
        
        ans += (sum == x);
        r++;
    }
    
    cout << ans << "\n"; 
}
