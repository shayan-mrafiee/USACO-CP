//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int N; cin >> N;
//    vector<int> a(N), mex(N+2), occurences(N+1, 0);
//    
//    for (int i = 0; i < N; i++) {
//        cin >> a[i];
//        occurences[a[i]]++;
//    }
//    
//    for (int i = 0; i <= N; i++) {
//        if (occurences[i] > 0) {
//            cout << max(occurences[i], mex[i]) << endl;
//        }
//        else {
//            cout << mex[i] << endl;
//        }
//        mex[i+1] = mex[i] + (occurences[i] == 0);
//    }
//}
