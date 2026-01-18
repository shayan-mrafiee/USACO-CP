//// Source: https://usaco.guide/general/io
//
//#include <bits/stdc++.h>
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//ll MAXL;
//vector<ll> v;
//
//bool check(ll L) {
//    if (L > MAXL) return false;
//    set<ll> mods;
//    for (ll a : v) {
//        mods.insert(a % L);
//        if (mods.size() > 3)
//            return false;
//    }
//    return true;
//}
//
//int main() {
//    int N; cin >> N;
//    v.resize(N);
//
//    for (ll &a : v)
//        cin >> a;
//    
//    sort(all(v));
//    v.erase(unique(all(v)), v.end());
//
//    MAXL = v[0]/4;
//    if (v.size() <= 3) {
//        cout << MAXL * (MAXL+1) / 2 << "\n";
//        return 0;
//    }
//
//    set<ll> cands;
//    auto factors = [&](ll a) {
//        for (ll i = 1; i*i <= a; i++) {
//            if (a % i == 0) {
//                cands.insert(i);
//                cands.insert(a/i);
//            }
//        }
//    };
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//            factors(v[j] - v[i]);
//        }
//    }
//
//    ll ans = 0;
//    for (ll L : cands) {
//        if (check(L))
//            ans += L;
//    }
//
//    cout << ans << "\n";
//}
