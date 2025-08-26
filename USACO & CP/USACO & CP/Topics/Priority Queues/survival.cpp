//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//const int mod = 1e9 + 7;
//
//ll F(vector<ll> &a) {
//    if (a.size() == 1) return a[0] % mod;
//    
//    sort(all(a));
//    int n = a.size();
//    ll x = a[0], c = 1;
//    for (int i = 0; i < n; i++) {
//        if (i) c = (c * 2) % mod;
//        a[i] -= x;
//    }
//    
//    priority_queue<ll> pq;
//    bool cont = true;
//    for (int i = 0; i < n-1 && cont; i++) {
//        for (int j = i+1; j < n; j++) {
//            cont = false;
//            if (pq.size() < n-1) {
//                pq.push(a[i] + a[j]);
//            }
//            else if (a[i] + a[j] < pq.top()) {
//                pq.pop();
//                pq.push(a[i] + a[j]);
//            }
//            else break;
//            
//            cont = true; 
//        }
//    }
//    
//    a.resize(0);
//    while(!pq.empty()) {
//        a.push_back(pq.top());
//        pq.pop();
//    }
//    
//    return (F(a) + (x % mod) * c) % mod;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n; cin >> n;
//    vector<ll> a(n);
//    
//    for (ll &i : a) cin >> i;
//    
//    cout << F(a) % mod << "\n";
//}
