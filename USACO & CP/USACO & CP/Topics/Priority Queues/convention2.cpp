//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Cow {
//    int a, t, age;
//    
//    bool operator<(const Cow &other) const {
//        return age < other.age;
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
//    for (int i = N-1; i >= 0; i--) {
//        cin >> cows[i].a >> cows[i].t;
//        cows[i].age = i;
//    }
//    
//    sort(all(cows), [](const Cow &cow1, const Cow &cow2) {
//        if (cow1.a == cow2.a) return cow1.age > cow2.age;
//        return cow1.a < cow2.a;
//    });
//    
//    int ans = 0;
//    priority_queue<Cow> pq;
//    ll next_time = 0;
//    for (Cow &cow : cows) {
//        if (cow.a <= next_time) pq.push(cow);
//        else {
//            while (!pq.empty() && cow.a > next_time) {
//                ans = max(ans, (int) (next_time - pq.top().a));
//                next_time += pq.top().t;
//                pq.pop();
//            }
//            if (pq.empty()) next_time = cow.a + cow.t;
//            else {
//                pq.push(cow);
//                next_time += pq.top().t;
//                pq.pop(); 
//            }
//        }
//    }
//    
//    cout << ans << "\n";
//}
