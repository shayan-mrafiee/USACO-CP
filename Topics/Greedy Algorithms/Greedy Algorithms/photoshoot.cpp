//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int n; cin >> n;
//    string cows; cin >> cows;
//    int reversals = 0;
//    for (int i = n - 2; i >= 0; i -= 2) {
//        string sub = cows.substr(i, 2);
//        if (sub == "GG") continue;
//        else if ((sub == "GH" && reversals % 2 == 0) || (sub == "HG" && reversals % 2 == 1))
//            reversals++;
//    }
//    cout << reversals << endl;
//    
//}
