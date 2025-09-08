//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Record {
//    int day, id, change;
//    
//    bool operator<(const Record &other) const {
//        return day < other.day;
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("measurement.in", "r", stdin);
//    freopen("measurement.out", "w", stdout);
//    
//    int N, G; cin >> N >> G;
//    map<int, int> milk, producers = {{G, N}};
//    vector<Record> records(N);
//    
//    for (auto &[day, id, change] : records) {
//        cin >> day >> id >> change;
//        milk[id] = G;
//    }
//    
//    sort(all(records));
//    
//    int changes = 0;
//    for (auto &[day, id, change] : records) {
//        pair<int, int> last_best = (pair<int, int>) *producers.rbegin();
//        producers[milk[id]]--;
//        if (producers[milk[id]] == 0) producers.erase(milk[id]);
//        
//        milk[id] += change;
//        producers[milk[id]]++;
//        
//        pair<int, int> now_best = (pair<int, int>) *producers.rbegin();
//        
//        changes += (now_best != last_best && !(last_best == make_pair(milk[id]-change, 1) && now_best == make_pair(milk[id], 1)));
//    }
//    
//    cout << changes << "\n";
//}
