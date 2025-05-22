////#include <iostream>
////#include <vector>
////
////using namespace std;
////
////int main() {
////    int n; cin >> n;
////    vector<int> evenIDs, oddIDs;
////    bool isEven = false;
////    bool cont = true;
////    int grps = 0;
////    for (int i = 0 ; i < n; i++) {
////        int id; cin >> id;
////        if (id % 2 == 0) evenIDs.push_back(id);
////        else oddIDs.push_back(id);
////    }
////    
////    while (cont) {
////        isEven = !isEven;
////        if (isEven && !evenIDs.empty()) {
////            grps++;
////            //cout << *evenIDs.begin() << endl;
////            evenIDs.erase(evenIDs.begin());
////        }
////        
////        else if (isEven && oddIDs.size() >= 2) {
////            grps++;
////            //cout << *oddIDs.begin() << ' ' << *(oddIDs.begin()+1) << endl;
////            oddIDs.erase(oddIDs.begin(), oddIDs.begin()+2);
////        }
////        
////        else if (!isEven && !oddIDs.empty()) {
////            grps++;
////            //cout << *oddIDs.begin() << endl;
////            oddIDs.erase(oddIDs.begin());
////        }
////        else if (!oddIDs.empty()){ grps--; break; }
////        else break;
////    }
////    
////    cout << grps << endl;
////    
////}
//
//// this is a better solution:
//
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int n; cin >> n;
//    int even = 0;
//    int odd = 0;
//    for (int i = 0; i < n; i++) {
//        int id; cin >> id;
//        if (id % 2 == 0) even++;
//        else odd++;
//    }
//    while (odd > even) {
//        odd -= 2; even++;
//    }
//    if (even > odd+1) even = odd+1;
//    cout << even+odd;
//}
