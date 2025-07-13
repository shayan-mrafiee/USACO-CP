//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//ll rent_profit[100001] = {},
//milk_profit[100001] = {};
//
//struct Store {
//    int q, p, s;
//};
//
//int main() {
//    freopen("rental.in", "r", stdin);
//    freopen("rental.out", "w", stdout);
//    
//    int N, M, R; cin >> N >> M >> R;
//    vector<int> cows(N), farms(R);
//    vector<Store> stores(M);
//    
//    for (int &c : cows) cin >> c;
//    for (auto &[q, p, _] : stores) cin >> q >> p;
//    for (int &r : farms) cin >> r;
//    
//    sort(cows.rbegin(), cows.rend());
//    sort(all(stores), [](const auto &a, const auto &b) {
//        return a.p > b.p;
//    });
//    sort(farms.rbegin(), farms.rend());
//    
//    int idx = 0;
//    for (int i = 1; i <= N; i++) {
//        ll profit = 0;
//        int milk = cows[i-1];
//        while(milk && idx < M) {
//            ll value = min(milk, stores[idx].q - stores[idx].s);
//            profit += value * stores[idx].p;
//            stores[idx].s += value;
//            idx += (stores[idx].s == stores[idx].q);
//            milk -= value;
//        }
//        
//        milk_profit[i] = milk_profit[i-1] + profit; 
//    }
//    
//    idx = 0;
//    for (int i = N-1; i >= 0; i--) {
//        rent_profit[i] = rent_profit[i+1];
//        if (idx < R) rent_profit[i] += farms[idx++];
//    }
//    
//    ll max_profit = 0;
//    for (int i = 0; i <= N; i++) {
//        max_profit = max(max_profit, milk_profit[i] + rent_profit[i]);
//    }
//    
//    cout << max_profit << "\n";
//}
