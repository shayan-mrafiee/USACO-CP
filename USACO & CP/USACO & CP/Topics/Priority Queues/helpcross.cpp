//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Cow {
//    int A, B;
//    
//    bool operator<(const Cow &other) const {
//        return B > other.B;
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("helpcross.in", "r", stdin);
//    freopen("helpcross.out", "w", stdout);
//    
//    int C, N; cin >> C >> N;
//    vector<int> chickens(C);
//    vector<Cow> cows(N);
//    
//    for (int &T : chickens) cin >> T;
//    for (auto &[A, B] : cows) cin >> A >> B;
//    
//    sort(all(chickens));
//    sort(all(cows), [](const Cow &a, const Cow &b) {
//        return a.A < b.A;
//    });
//    
//    int pairs = 0;
//    priority_queue<Cow> pq;
//    for (int i = 0, j = 0; i < C; i++) {
//        for (; j < N && chickens[i] >= cows[j].A; j++) {
//            if (chickens[i] > cows[j].B) continue; 
//            pq.push(cows[j]);
//        }
//        
//        while(!pq.empty() && pq.top().B < chickens[i]) pq.pop();
//        if (!pq.empty() && chickens[i] >= pq.top().A) {
//            pairs++;
//            pq.pop();
//        }
//    }
//    
//    cout << pairs << "\n";
//}
