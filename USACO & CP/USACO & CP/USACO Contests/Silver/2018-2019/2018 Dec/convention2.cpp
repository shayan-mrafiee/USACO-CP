//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Cow {
//    int a, t, s;
//    
//    bool operator<(const Cow &other) const {
//        return s < other.s;
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    freopen("convention2.in", "r", stdin);
//    freopen("convention2.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<Cow> cows(N);
//    
//    for (int i = 0; i < N; i++) {
//        cin >> cows[i].a >> cows[i].t;
//        cows[i].s = N - i; 
//    }
//    
//    sort(all(cows), [](const Cow &a, const Cow &b) {
//        if (a.a == b.a) return a.s > b.s;
//        return a.a < b.a;
//    });
//    
//    priority_queue<Cow> pq;
//    int time = 0, max_waiting_time = 0;
//    for (int i = 0; i < N || !pq.empty(); ) {
//        if (pq.empty()) time = cows[i].a + cows[i++].t;
//        while(i < N && cows[i].a <= time) pq.push(cows[i++]);
//        
//        if (!pq.empty()) {
//            max_waiting_time = max(max_waiting_time, time - pq.top().a);
//            time += pq.top().t;
//            pq.pop();
//        }
//    }
//    
//    cout << max_waiting_time << "\n";
//}
