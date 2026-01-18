//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//struct Info {
//    int x, y, t;
//    
//    bool operator<(const Info &other) const {
//        return t < other.t;
//    }
//    
//    ll operator-(const Info &other) {
//        return 1LL * (t - other.t) * (t - other.t);
//    }
//};
//
//ll dist(Info &i1, Info &i2) {
//    return 1LL * (i1.x - i2.x) * (i1.x - i2.x) + 1LL * (i1.y - i2.y) * (i1.y - i2.y);
//}
//
//int main() {
//    int G, N; cin >> G >> N;
//    
//    vector<Info> grazings(G), alibis(N);
//    
//    for (auto &[x, y, t] : grazings) cin >> x >> y >> t;
//    for (auto &[x, y, t] : alibis) cin >> x >> y >> t;
//    
//    sort(all(grazings));
//    sort(all(alibis));
//    
//    int g = 0; // index for grazing
//    int ans = 0;
//    for (int i = 0; i < N; i++) {
//        while(g < G-1 && grazings[g].t <= alibis[i].t) g++;
//        
//        if (g && dist(grazings[g-1], alibis[i]) > (grazings[g-1] - alibis[i])) {
//            ans++;
//            continue;
//        }
//        
//        if (dist(grazings[g], alibis[i]) > (grazings[g] - alibis[i])) {
//            ans++;
//            continue; 
//        }
//    }
//    
//    cout << ans << "\n";
//}
