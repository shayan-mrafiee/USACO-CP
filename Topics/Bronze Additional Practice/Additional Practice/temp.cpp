//#include <bits/stdc++.h>
//using namespace std;
// 
//const int mx = 200005;
//int A[mx];
//int ans[mx];
// 
//int main(){
//    cin.tie(0)->sync_with_stdio(0);
//    int N, K, T; cin >> N >> K >> T;
//    for(int i = 1; i <= K; i++){
//        cin >> A[i];
//    }
// 
//    for(int i = 0; i < N; i++){
//        ans[i] = i;
//    }
// 
//    for(int t = 1; t <= T; t++){
//        //active positions rotate
//        vector<int> vals;
//        for(int i = 1; i <= K; i++){
//            vals.push_back(ans[A[i]]);
//        }
//        for(int i = 0; i < K; i++){
//            ans[A[i+1]] = vals[(i-1+(vals.size())) % (vals.size())];
//        }
//        for(int i = 1; i <= K; i++){
//            A[i] = (A[i]+1) % N;
//        }
//    }
//    for(int i = 0; i < N; i++){
//        cout << ans[i];
//        if(i+1 < N) cout << " ";
//    }
//    cout << "\n";
//}
