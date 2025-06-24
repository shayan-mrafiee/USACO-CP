//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    freopen("gymnastics.in", "r", stdin);
//    freopen("gymnastics.out", "w", stdout);
//    
//    int K, N; cin >> K >> N;
//    vector<vector<int>> rankings (K, vector<int>(N));
//    for (vector<int> &v : rankings) for (int &i : v) cin >> i;
//    
//    int consistent_pairs = 0;
//    for (int A = 1; A <= N-1; A++) {
//        for (int B = A+1; B <= N; B++) {
//            int cowA = 0, cowB = 0;
//            for (vector<int> &v : rankings) {
//                int indxA = find(all(v), A) - v.begin(),
//                indxB = find(all(v), B) - v.begin();
//                
//                cowA += (indxA < indxB);
//                cowB += (indxB < indxA);
//                
//                if (cowA && cowB) break;
//            }
//            
//            consistent_pairs += !(cowA && cowB);
//        }
//    }
//    
//    cout << consistent_pairs << "\n"; 
//}
