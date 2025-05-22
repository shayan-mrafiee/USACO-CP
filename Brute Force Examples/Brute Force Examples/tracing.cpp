//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <cmath> 
//
//using namespace std;
//
//bool test(int cow, int k, vector<vector<int>> interactions, string status) {
//    string s (status.size(), '0');
//    vector<int> shakes (status.size(), 0);
//    s[cow] = '1';
//    for (vector<int> v : interactions) {
//        if ((s[v[1]] != '1' && s[v[2]] != '1')) continue;
//        if (s[v[1]] == '1' && s[v[2]] == '1' && shakes[v[1]] < k && shakes[v[2]] < k) {
//            shakes[v[1]]++;
//            shakes[v[2]]++;
//        }
//        else if (s[v[1]] == '1' && shakes[v[1]] < k) {
//            shakes[v[1]]++;
////            cout << "cow " << v[1]+1 << " has made " << shakes[v[1]] << " hoof shakes \n";
//            s[v[2]] = '1';
////            cout << s << endl;
//        }
//        else if (s[v[2]] == '1' && shakes[v[2]] < k) {
//            shakes[v[2]]++;
////            cout << "cow " << v[2]+1 << " has made " << shakes[v[2]] << " hoof shakes \n";
//            s[v[1]] = '1';
////            cout << s << endl; 
//        }
//    }
////    cout << s << endl;
////    int i = *(shakes.end()-1);
////    cout << "test = " << i << endl;
//    return (s == status);
//}
//
//int main() {
//    freopen("tracing.in", "r", stdin);
//    freopen("tracing.out", "w", stdout);
//    
//    int N, T;
//    string status;
//    cin >> N >> T >> status;
//    vector<vector<int>> interactions (T);
//    
//    for (int i = 0; i < T; i++) {
//        int t, x, y; cin >> t >> x >> y;
//        interactions[i] = {t, x-1, y-1};
//    }
//    if (count(status.begin(), status.end(), '1') == 1) {
//        cout << "1 0 0" << endl;
//        return 0;
//    }
//    
//    sort(interactions.begin(), interactions.end());
//    int patientZeros = 0, y = T, z = -1;
//    for (int cow = 0; cow < N; cow++) {
////        cout << "testing cow " << cow+1 << endl; 
//        bool ok = false;
//        for (int k = 1; k <= T; k++) {
//            if (test(cow, k, interactions, status)) {
//                ok = true;
//                y = min(k, y);
//                z = max(z, k);
////                cout << "k = " << k << endl; 
//            }
//        }
//        if (ok) patientZeros++; 
//    }
//    
//    cout << patientZeros << " " << y << " " << ((z == T) ? "Infinity" : to_string(z)) << endl; 
//}
