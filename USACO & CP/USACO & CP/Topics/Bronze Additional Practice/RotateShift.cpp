//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    freopen("whatbase.in", "r", stdin); 
//    int N, K, T;
//    cin >> N >> K >> T;
//    vector<int> order (N), A (K);
//    for (int i = 0; i < N; i++) order[i] = i;
//    for (int &i : A) cin >> i;
//    
//    vector<vector<int>> rotations = {order};
//    do {
//        T--;
//        vector<int> v (K);
//        for (int i = 0; i < K; i++) {
//            v[i] = order[A[i]];
//        }
//        for (int i = 1; i < K; i++) {
//            order[A[i]] = v[i-1];
//        }
//        order[A[0]] = v[K-1];
//        
//        if (T == 0) {
//            for (int i = 0; i < N; i++) {
//                cout << order[i];
//                if (i+1 < N) cout << ' ';
//            }
//            cout << endl;
//            return 0;
//        }
//        
//        rotations.push_back(order);
//        for (int &i : A) {
//            i = (i+1) % N;
//        }
//        
//    } while(order != rotations[0]);
//    
//    
//    for (int i = 0; i < N; i++) {
//        cout << rotations[T % rotations.size()][i];
//        if (i + 1 < N) cout << " ";
//    }
//    cout << "\n";
//}
