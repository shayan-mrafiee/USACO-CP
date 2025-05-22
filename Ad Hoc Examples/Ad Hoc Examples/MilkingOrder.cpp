//#include <fstream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool check(vector<int> hierarchy, vector<int> test) {
//    vector<int> order (hierarchy.size());
//    for (int i = 0; i < hierarchy.size(); i++) {
//        order[i] = find(test.begin(),test.end(), hierarchy[i]) - test.begin();
//    }
//    vector<int> temp = order;
//    sort(order.begin(), order.end());
//    if (order == temp)
//        return true;
//    else return false;
//}
//
//
//int main() {
//    ifstream cin ("milkorder.in");
//    ofstream cout ("milkorder.out");
//
//    int n, m, k; cin >> n >> m >> k;
//    vector<int> positions (n,0);
//    vector<int> hierarchy (m);
//    for (int i = 0; i < m; i++) {
//        cin >> hierarchy[i];
//    }
//    for (int i = 0; i < k; i++) {
//        int c, p;
//        cin >> c >> p;
//        positions[p-1] = c;
//    }
//    for (int i = 0; i < n; i++) {
//        if (positions[i] != 0) continue;
//        vector<int> test = positions;
//        test[i] = 1;
////        for (int j : test)
////            cout << j << " ";
////        cout << endl;
////        cout << "putting 1 at position " << i+1 << endl;
//        int h = 0;
//        for (int p = 0; p < n && h < m; p++) {
//            if (test[p] != 0) continue; 
//            if (count(test.begin(), test.end(), hierarchy[h]) == 1) {
//                //cout << hierarchy[h] << " is already decided\n";
//                p = find(test.begin(), test.end(), hierarchy[h]) - test.begin();
//                h++;
//                //cout << "now trying " << hierarchy[h] << endl;
//                continue; 
//            }
//            if (h < m) {
//                test[p] = hierarchy[h];
//                //cout << "put " << hierarchy[h] << " at position " << p+1 << endl;
//            }
//            h++;
//        }
//        
//        for (int j : test) {
//            cout << j << " ";
//        }
//        cout << endl;
//        if (check(hierarchy, test)) {
//            cout << i+1 << endl;
//            return 0;
//        }
//    }
//}
