//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Friend {
//    int h, w, i;
//    
//    bool operator<(const Friend &other) const {
//        if (h != other.h) return h < other.h;
//        return w > other.w;
//    };
//};
//
//void solve() {
//    int n; cin >> n;
//    vector<Friend> people(n);
//    for (int i = 0; i < n; i++) {
//        Friend &person = people[i];
//        cin >> person.h >> person.w;
//        if (person.h < person.w) swap(person.h, person.w);
//        person.i = i+1;
//    }
//    
//    sort(all(people));
//    
//    vector<int> ans(n, -1);
//    int idx = people[0].i, value = people[0].w;
//    for (int i = 1; i < n; i++) {
//        if (people[i].w > value) ans[people[i].i-1] = idx;
//        else {
//            idx = people[i].i;
//            value = people[i].w;
//        }
//    }
//    
//    for (int &i : ans) cout << i << ' ';
//    cout << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
