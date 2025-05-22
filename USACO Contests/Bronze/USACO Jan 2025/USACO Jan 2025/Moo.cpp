//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    vector<pair<int, int>> last_occur (1000001, {0,0});
//    
//    int N; cin >> N;
//    vector<int> a (N);
//    vector<bool> used (1000001, false);
//    vector<int> num_dif (N+1, 0);
//    for (int i = 0; i < N; i++) {
//        cin >> a[i];
//        last_occur[a[i]].first = last_occur[a[i]].second;
//        last_occur[a[i]].second = i;
//        num_dif[i+1] = num_dif[i];
//        num_dif[i+1] += (!used[a[i]]);
//        used[a[i]] = true;
//    }
//    
//    ll moos = 0;
//    for (int i = 1; i <= N; i++) {
//        moos += num_dif[last_occur[i].first+1]-1;
//    }
//    
//    cout << moos << endl;
//}
