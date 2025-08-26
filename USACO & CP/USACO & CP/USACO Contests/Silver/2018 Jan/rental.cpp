//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Store {
//    int q, p;
//    
//    bool operator<(const Store &other) const {
//        return p > other.p;
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("rental.in", "r", stdin);
//    freopen("rental.out", "w", stdout);
//    
//    int N, M, R;
//    cin >> N >> M >> R;
//    vector<int> milks(N), rent(R);
//    vector<Store> stores(M);
//    
//    for (int &c : milks) cin >> c;
//    for (auto &[q, p] : stores) cin >> q >> p;
//    for (int &r : rent) cin >> r;
//    
//    sort(milks.rbegin(), milks.rend());
//    sort(all(rent));
//    sort(all(stores));
//    
//    vector<ll> prefix_milk(N+1), suffix_rent(N+1);
//    for (int i = 1; i <= N; i++) {
//        suffix_rent[N-i] = suffix_rent[N-i+1];
//        if (i <= R) suffix_rent[N-i] += rent[R-i];
//    }
//    int store = 0; ll milk = 0;
//    for (int i = 1; i <= N; i++) {
//        milk += milks[i-1];
//        prefix_milk[i] = prefix_milk[i-1];
//        while(milk && store < M) {
//            ll amount = min(milk, (ll) stores[store].q);
//            prefix_milk[i] += amount * stores[store].p;
//            
//            milk -= amount;
//            stores[store].q -= amount;
//            store += (stores[store].q == 0);
//        }
//    }
//    
//    ll max_profit = 0;
//    for (int i = 0; i <= N; i++) {
//        max_profit = max(max_profit, prefix_milk[i] + suffix_rent[i]);
//    }
//    
//    cout << max_profit << "\n";
//}
