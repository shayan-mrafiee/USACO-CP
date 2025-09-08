//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("herding.in", "r", stdin);
//    freopen("herding.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<int> locations(N), prefix_gaps(N), suffix_gaps(N);
//    
//    for (int &i : locations) cin >> i;
//    
//    sort(all(locations));
//    
//    int maximum = 0, minimum = INT32_MAX;
//    
//    int l = 0, r = 0;
//    if (locations[1] - locations[0] >= 3 || locations.back() - locations[N-2] >= 3) minimum = 2;
//    
//    else while(r < N) {
//        if (locations[r] - locations[l] + 1 < N) r++;
//        else {
//            if (locations[r] - locations[l] + 1 > N) r--;
//        }
//    }
//}
