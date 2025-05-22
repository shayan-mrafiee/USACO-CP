//#include <fstream>
//#include <vector>
//#include <map>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    ifstream cin("measurement.in");
//    ofstream cout("measurement.out");
//    
//    int n; cin >> n;
//    map<string, int> milk;
//    string b = "Bessie", e = "Elsie", m = "Mildred";
//    milk["Bessie"] = milk["Elsie"] = milk["Mildred"] = 7;
//    vector<int> milkchanges (100, 0);
//    vector<string> cowchanges (100, "0");
//    int changes = 0;
//    vector<string> unique = {b,e,m};
//    for (int i = 0; i < n; i++) {
//        int day; cin >> day;
//        string cow; int change;
//        cin >> cow >> change;
//        cowchanges[day-1] = cow;
//        milkchanges[day-1] = change;
//    }
//    for (int i = 0; i < 100; i++) {
//        if (milkchanges[i] == 0) { continue; }
//        milk[cowchanges[i]] += milkchanges[i];
//        int greatest = max(milk[b], max(milk[e], milk[m]));
//        vector<string> newUnique;
//        if (greatest == milk[b]) { newUnique.push_back(b); }
//        if (greatest == milk[e]) { newUnique.push_back(e); }
//        if (greatest == milk[m]) { newUnique.push_back(m); }
//        changes += (newUnique != unique) ? 1 : 0;
//        unique = newUnique;
//    }
//    cout << changes << endl; 
//}
