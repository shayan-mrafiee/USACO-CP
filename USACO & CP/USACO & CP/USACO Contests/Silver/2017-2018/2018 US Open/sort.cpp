//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("sort.in", "r", stdin);
//    freopen("sort.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<int> A(N);
//    
//    for (int &i : A) cin >> i;
//    
//    vector<int> sorted = A;
//    sort(all(sorted));
//    
//    map<int, int> idx; // index in sorted
//    for (int i = 0; i < N; i++) {
//        idx[sorted[i]] = i;
//    }
//    
//    int moos = 0;
//    for (int i = 0; i < N; i++) {
//        moos = max(moos, i - idx[A[i]]);
//    }
//    
//    cout << moos+1 << "\n";
//}
