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
//    vector<Record> records(N);
//    map<int, int> milk, producers;
//    
//    for (auto &[day, id, change] : records) {
//        cin >> day >> id >> change;
//        milk[id] = G;
//    }
//    
//    sort(all(records));
//    producers = {{G, N}};
//    int changes = 0;
//    
//    pair<int, int> most_milk = {G, N};
//    for (int i = 0; i < N; i++) {
//        auto &[day, id, change] = records[i];
//        int milk_amt = milk[id];
//        
//        producers[milk_amt]--;
//        if (!producers[milk_amt]) producers.erase(milk_amt);
//        
//        milk[id] += change;
//        producers[milk[id]]++;
//        pair<int, int> next_most_milk = *producers.rbegin();
//        
//        changes += (most_milk != next_most_milk && !(most_milk == make_pair(milk_amt, 1) && next_most_milk == make_pair(milk[id], 1)));
//        most_milk = next_most_milk;
//    }
//    
//    cout << changes << "\n";
//}
