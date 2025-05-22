//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//bool is_outofplace(vector<int> cows, int i) {
//    cows.erase(cows.begin() + i);
//    vector<int> original = cows;
//    sort(original.begin(), original.end());
//    return (cows == original);
//}
//
//int main() {
//    freopen("outofplace.in", "r", stdin);
//    freopen("outofplace.out", "w", stdout);
//    
//    int n; cin >> n;
//    vector<int> cows (n);
//    int flips;
//    int outofplace;
//    bool small_big;
//    for (int i = 0; i < n; i++)
//        cin >> cows[i];
//    
//    vector<int> original = cows;
//    sort(original.begin(), original.end());
//    
//    for (int i = 0; i < n; i++) {
//        if (cows[i] != original[i]) {
//            outofplace = (is_outofplace(cows, i)) ? i : find(cows.begin()+i, cows.end(), original[i])-cows.begin();
//            flips = (is_outofplace(cows, i)) ? (find(original.begin(), original.end(), cows[i])-original.begin())-outofplace : i-outofplace;
//            small_big = (flips < 0);
//            flips = abs(flips);
////            cout << outofplace << endl;
////            cout << flips << endl;
//            break; 
//        }
//    }
//    int previous = cows[outofplace];
//    if (small_big) {
//        n = outofplace-flips;
//        for (int i = outofplace-1; i >= n-1; i--) {
//            //cout << i << endl;
//            if (cows[i] == previous) flips--;
////            cout << previous << " ";
////            cout << cows[i] << endl;
//            previous = cows[i];
//        }
//    }
//    else {
//        n = outofplace+flips;
//        for (int i = outofplace+1; i <= n; i++) {
//            //cout << i << endl;
//            if (cows[i] == previous) flips--;
////            cout << previous << " ";
////            cout << cows[i] << endl;
//            previous = cows[i];
//        }
//    }
//    
//    cout << flips << endl;
//    
//}
