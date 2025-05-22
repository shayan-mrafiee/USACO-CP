//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    int N, L; cin >> N >> L;
//    vector<int> c (N);
//    int h_indx = 0;
//    for (int i = 0; i < N; i++) {
//        cin >> c[i];
//    }
//    
//    sort(c.rbegin(), c.rend());
//    
//    for (int i = 1; i <= N; i++) {
//        h_indx = max(h_indx, min(i, c[i-1]));
//    }
//    
//    for (int i = 0; i < N && L > 0; i++) {
//        if (c[i] == h_indx) {
//            c[i]++;
//            L--;
//        }
//    }
//    
//    for (int i = 1; i <= N; i++) {
//        h_indx = max(h_indx, min(i, c[i-1]));
//    }
//    
//    cout << h_indx << endl;
//    
//}
