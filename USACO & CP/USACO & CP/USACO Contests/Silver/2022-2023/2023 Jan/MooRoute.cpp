//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N; cin >> N;
//    vector<int> A(N+1);
//    
//    for (int i = 0; i < N; i++) cin >> A[i];
//    
//    int x = 0;
//    string route;
//    while(x || A[x]) {
//        while(A[x]) {
//            A[x++]--;
//            route.push_back('R');
//        }
//        while(x && (!A[x] || A[x-1] > 1)) {
//            A[--x]--;
//            route.push_back('L');
//        }
//    }
//    
//    cout << route << "\n";
//}
