//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N, K; cin >> N >> K;
//    set<int> years;
//    vector<int> wait_times;
//    for (int i = 0; i < N; i++) {
//        int y; cin >> y;
//        years.insert((y+11)/12);
//    }
//    
//    int prev = 0;
//    for (int i : years) {
//        wait_times.push_back(i - prev);
//        prev = i;
//    }
//    
//    sort(all(wait_times));
//    
//    K--;
//    cout << (accumulate(wait_times.begin(), wait_times.begin() + wait_times.size() - K, 0) + K) * 12 << "\n";
//}
