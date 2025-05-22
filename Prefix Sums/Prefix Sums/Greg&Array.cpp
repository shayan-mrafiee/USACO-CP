//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//struct Op {
//    ll l, r, d;
//};
//
//int main() {
//    ll n, m, k;
//    cin >> n >> m >> k;
//    vector<ll> arr (n);
//    vector<ll> diff (n+2, 0);
//    vector<Op> operations(m);
//    vector<ll> used (m+2, 0);
//    
//    for (ll &i : arr) cin >> i;
//    
//    diff[1] = arr[0];
//    
//    for (ll i = 2; i <= n; i++) {
//        diff[i] = arr[i-1] - arr[i-2];
//    }
//    
//    for (Op &o : operations) cin >> o.l >> o.r >> o.d;
//    
//    for (ll i = 0; i < k; i++) {
//        ll x, y;
//        cin >> x >> y;
//        used[x]++;
//        used[y+1]--;
//    }
//    
//    for (ll i = 0; i < m; i++) {
//        used[i+1] += used[i];
//        
//        diff[operations[i].l] += operations[i].d * used[i+1];
//        diff[operations[i].r+1] -= operations[i].d * used[i+1];
//    }
//    
//    for (ll i = 1; i <= n; i++) {
//        diff[i] += diff[i-1];
//        cout << diff[i] << ' ';
//    }
//}
