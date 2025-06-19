//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//struct Grazing {
//    int x, y, t;
//    bool operator<(const Grazing &other) const {
//        return t < other.t;
//    };
//};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//
//    int G, N; cin >> G >> N;
//    vector<Grazing> grazings(G);
//    for (auto &[x, y, t] : grazings) cin >> x >> y >> t;
//    
//    sort(all(grazings));
//    vector<int> times(G);
//    for (int i = 0; i < G; i++) times[i] = grazings[i].t;
//    
//    auto reachable = [](Grazing g, Grazing alibi) {
//        ll dx = g.x - alibi.x, dy = g.y - alibi.y, dt = g.t - alibi.t;
//        return dx * dx + dy * dy <= dt * dt;
//    };
//
//    int innocents = 0;
//    while(N--) {
//        Grazing alibi;
//        cin >> alibi.x >> alibi.y >> alibi.t;
//        int indx = lower_bound(all(times), alibi.t) - times.begin();
//        bool is_innocent = false;
//        
//        if (indx) is_innocent |= !reachable(grazings[indx-1], alibi);
//        if (indx < G && !is_innocent) is_innocent |= !reachable(grazings[indx], alibi);
//        
//        innocents += is_innocent;
//    }
//    
//    cout << innocents << "\n";
//}
