//#include <fstream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    ifstream cin ("herding.in");
//    ofstream cout ("herding.out");
//    
//    vector<int> locations (3);
//    for (int i = 0; i < 3; i++) {
//        cin >> locations[i];
//    }
//    sort(locations.begin(), locations.end());
//    
//    if (locations[1]-locations[0] == 1 && locations[2]-locations[1] == 1)
//        cout << 0 << endl;
//    
//    else if (locations[1] - locations[0] == 2 || locations[2] - locations[1] == 2)
//        cout << 1 << endl;
//    else
//        cout << 2 << endl;
//    
//    cout << max(locations[2]-locations[1], locations[1]-locations[0]) - 1 << endl; 
//}
