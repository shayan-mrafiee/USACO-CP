//#include <fstream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include <limits.h>
//
//using namespace std;
//
//int main() {
//    ifstream cin ("angry.in");
//    ofstream cout ("angry.out");
//    
//    int n; cin >> n;
//    vector<int> bales (n);
//    for (int i = 0; i < n; i++) {
//        cin >> bales[i];
//    }
//    sort(bales.begin(), bales.end());
//    int maxBlasts = 0;
//    for (int i = 1; i < n; i++) {
//        bool cont = true;
//        //cout << "testing " << bales[i] << endl;
//        int t = 1;
//        int b = 1;
//        int rmin = bales[i];
//        int rmax = bales[i];
//        int nextrmin = rmin;
//        int nextrmax = rmax;
//        while (cont) {
////            cout << "rmax = " << rmax << endl;
////            cout << "rmin = " << rmin << endl;
//            cont = false;
//            //cout << "t = " << t << endl;
//            int lower = find(bales.begin(), bales.end(), rmin) - bales.begin();
//            for (int j = lower-1; j >= 0; j--) {
//                //cout << "rmin - bales[j] = " << rmin - bales[j] << endl;
//                if (rmin - bales[j] <= t) {
//                    //cout << "condition is met.\n";
//                    b++;
//                    nextrmin = bales[j];
//                    cont = true;
//                }
//                else {
//                    //cout << "false condition. breaking.\n";
//                    break;
//                }
//            }
//            int upper = find(bales.begin(), bales.end(), rmax) - bales.begin();
//            for (int j = upper+1; j < n; j++) {
//                //cout << "bales[j] - rmax = " << bales[j] - rmax << endl;
//                if (bales[j] - rmax <= t) {
//                    //cout << "condition is met.\n";
//                    cont = true;
//                    b++;
//                    nextrmax = bales[j];
//                }
//                else {
//                    //cout << "false condition. breaking.\n";
//                    break;
//                }
//            }
////            cout << "nextrmin = " << nextrmin << endl;
////            cout << "nextrmax = " << nextrmax << endl;
//            
//            rmin = (nextrmin == rmin) ? INT_MAX : nextrmin;
//            rmax = (nextrmax == rmax) ? -1 : nextrmax;
//            nextrmin = rmin;
//            nextrmax = rmax;
//            t++;
//            
//        }
//        //cout << "b = " << b << endl;
//        maxBlasts = max(b, maxBlasts);
//    }
//    cout << maxBlasts << endl; 
//    
//}
