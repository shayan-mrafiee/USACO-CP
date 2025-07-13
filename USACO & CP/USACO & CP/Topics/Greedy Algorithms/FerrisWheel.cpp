//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n, x; cin >> n >> x;
//    vector<int> weights(n);
//    for (int &p : weights) cin >> p;
//    
//    sort(weights.rbegin(), weights.rend());
//    
//    int gondolas = 0;
//    for (int i = 0; i < weights.size(); i++) {
//        if (weights[i] + weights.back() <= x) weights.pop_back();
//        gondolas++;
//    }
//    
//    cout << gondolas << "\n";
//}
