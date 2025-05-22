//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    freopen("notlast.in", "r", stdin);
//    freopen("notlast.out", "w", stdout); 
//    
//    int N; cin >> N;
//    map<string, int> order;
//    string cows[] = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
//    vector<pair<string, int>> milk;
//    for (int i = 0; i < 7; i++) {
//        order[cows[i]] = i;
//        milk.push_back({cows[i], 0});
//    }
//    
//    for (int i = 0; i < N; i++) {
//        string cow; int amount;
//        cin >> cow >> amount;
//        milk[order[cow]].second += amount;
//    }
//    
//    sort(milk.begin(), milk.end(), [](const pair<string, int> &a, const pair<string, int> &b) {
//        return a.second < b.second;
//    });
//    //for(pair<string, int> p : milk) cout << p.first << " " << p.second << endl; 
//    int last = milk[0].second;
//    int i = 0;
//    while (i < 7 && milk[i].second == last) i++;
//    if (i < 6 && milk[i].second == milk[i+1].second) cout << "Tie\n";
//    else if (i == 7) cout << "Tie\n";
//    else cout << milk[i].first << endl;
//}
