//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//vector<int> test(vector<int> x, int i) {
//    vector<int> involved = {x[i]};
//    bool cont = true;
//
//    while (cont) {
//        if (count(involved.begin(), involved.end(), x[i]) > 1) break;
//        if (i == 0) {
//            involved.push_back(x[i+1]);
//            i++;
//        }
//        else if (i == x.size()-1) {
//            involved.push_back(x[i-1]);
//            i--;
//        }
//        else {
//            int dif1 = x[i] - x[i-1];
//            int dif2 = x[i+1] - x[i];
//            if (dif1 <= dif2) {
//                involved.push_back(x[i-1]);
//                i--;
//            }
//            else {
//                involved.push_back(x[i+1]);
//                i++;
//            }
//        }
//    }
//    involved.erase(involved.end()-1);
//    return involved;
//}
//
//int main() {
//    freopen("hoofball.in", "r", stdin);
//    freopen("hoofball.out", "w", stdout);
//
//    vector<vector<int>> pass;
//    int n; cin >> n;
//    vector<int> x (n);
//    int ball = 0;
//    for (int i = 0; i < n; i++) {
//        cin >> x[i];
//    }
//
//    if (n == 1) {
//        cout << 1 << endl;
//        return 0;
//    }
//
//    sort(x.begin(), x.end());
//    for (int i = 0; i < n; i++) {
//        pass.push_back(test(x, i)); // see which cows will be passed a ball if the ball is given to the cow standing at position x[i]
//    }
//    vector<bool> involved (n, false);
//    while (count(involved.begin(), involved.end(), false)) {
//        vector<pair<int, int>> optimal;
//        for (int v = 0; v < pass.size(); v++) {
//            optimal.push_back({v, 0});
//            for (int i : pass[v]) {
//                if (!involved[find(x.begin(), x.end(), i) - x.begin()]) optimal[optimal.size()-1].second++;
//            }
//        }
//        sort(optimal.begin(), optimal.end(), [] (const pair<int, int> &a, const pair<int, int> &b) {
//            return a.second > b.second;
//        }); // sort the vector based on the number of cows that would get involved if farmer john picks the choice
//        vector<int> v = pass[optimal[0].first];
//        pass.erase(pass.begin() + optimal[0].first);
//        for (int i : v) {
//            involved[find(x.begin(), x.end(), i) - x.begin()] = true;
//        }
//        ball++;
//    }
//    cout << ball << endl;
//}
