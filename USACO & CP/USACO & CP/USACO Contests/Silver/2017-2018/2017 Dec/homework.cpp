//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("homework.in", "r", stdin);
//    freopen("homework.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<int> grades(N);
//    ll sum = 0;
//    
//    for (int &i : grades) {
//        cin >> i;
//        sum += i;
//    }
//    
//    vector<int> suffix_min(N); suffix_min.back() = grades.back();
//    for (int i = N-2; i >= 0; i--) {
//        suffix_min[i] = min(suffix_min[i+1], grades[i]);
//    }
//    
//    set<int> K_values;
//    double max_score = 0;
//    for (int i = 0; i < N-2; i++) {
//        sum -= grades[i];
//        double score = 1.0*(sum - suffix_min[i])/(N-i-2);
//        if (score > max_score) {
//            max_score = score;
//            K_values = {i+1};
//        }
//        else if (score == max_score) K_values.insert(i+1);
//    }
//    
//    for (int K : K_values) cout << K << "\n";
//}
