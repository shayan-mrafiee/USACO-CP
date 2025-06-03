//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    freopen("citystate.in", "r", stdin);
//    freopen("citystate.out", "w", stdout);
//    
//    int N; cin >> N;
//    int pairs = 0;
//    map<string, vector<string>> statecities;
//    for (int i = 0; i < N; i++) {
//        string city, state; cin >> city >> state;
//        city = city.substr(0, 2);
//        if (city != state) pairs += count(statecities[city].begin(), statecities[city].end(), state);
//        statecities[state].push_back(city); 
//        
//    }
//    
//    cout << pairs << endl; 
//    
//}
