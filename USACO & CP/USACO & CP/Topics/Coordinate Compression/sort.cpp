//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//#define val first
//#define indx second
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("sort.in", "r", stdin);
//    freopen("sort.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<pair<int, int>> arr(N);
//    
//    for (int i = 0; i < N; i++) {
//        cin >> arr[i].val;
//        arr[i].indx = i;
//    }
//    
//    sort(all(arr));
//    
//    int moo = 0;
//    for (int i = 0; i < N; i++) {
//        moo = max(moo, arr[i].indx - i);
//    }
//    
//    cout << moo + 1 << "\n";
//}
