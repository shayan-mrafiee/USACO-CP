//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Cow {
//    int w, x, d;
//    
//    bool operator<(const Cow &other) const {
//        return x < other.x;
//    };
//};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("meetings.in", "r", stdin);
//    freopen("meetings.out", "w", stdout);
//    
//    int N, L; cin >> N >> L;
//    int total_weight = 0;
//    vector<Cow> cows(N), lefts, rights;
//    vector<pair<int, int>> barn_times; // (time, weight)
//    
//    for (auto &[w, x, d] : cows) {
//        cin >> w >> x >> d;
//        total_weight += w;
//    }
//    
//    sort(all(cows));
//    
//    for (Cow &cow : cows) {
//        if (cow.d == 1) rights.push_back(cow);
//        else lefts.push_back(cow);
//    }
//    
//    for (int i = 0; i < lefts.size(); i++) {
//        barn_times.push_back({lefts[i].x, cows[i].w});
//    }
//    for (int i = 0; i < rights.size(); i++) {
//        barn_times.push_back({L - rights[i].x, cows[lefts.size() + i].w});
//    }
//    
//    sort(all(barn_times));
//    
//    int T = -1;
//    for (auto &[t, w] : barn_times) {
//        total_weight -= 2*w;
//        if (total_weight <= 0) {
//            T = t;
//            break;
//        }
//    }
//    
//    int meetings = 0;
//    queue<int> locations;
//    for (Cow &cow : cows) {
//        if (cow.d == 1) locations.push(cow.x);
//        else {
//            while(!locations.empty() && locations.front() + 2*T < cow.x) locations.pop();
//            meetings += locations.size();
//        }
//    }
//    
//    cout << meetings << "\n";
//}
