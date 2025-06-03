//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//
//using namespace std;
//
//int main() {
//    int N; cin >> N;
//    vector<double> p (N);
//    for (int i = 0; i < N; i++)
//        cin >> p[i];
//    
//    int ans = 0;
//    for (int i = 0; i < N; i++) {
//        for (int j = i+1; j <= N; j++) {
//            double avg = accumulate(p.begin()+i, p.begin()+j, 0) / (double) (j - i);
//            if (count(p.begin() + i, p.begin() + j, avg)) ans++;
//        }
//    }
//    
//    cout << ans << endl;
//}
