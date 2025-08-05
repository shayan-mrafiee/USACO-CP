//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n, m; cin >> n >> m;
//    
//    vector<int> ciel(m), atk, def;
//    
//    for (int i = 0; i < n; i++) {
//        string position; int strength;
//        cin >> position >> strength;
//        if (position == "ATK") atk.push_back(strength);
//        else def.push_back(strength);
//    }
//    for (int &strength : ciel) cin >> strength;
//    
//    int damage1 = 0;
//    sort(all(ciel));
//    sort(all(atk));
//    sort(all(def));
//    
//    int c = m-1, a = 0;
//    while(c >= 0 && a < atk.size()) {
//        if (atk[a] > ciel[c]) break;
//        damage1 += ciel[c--] - atk[a++];
//    }
//    
//    int damage2 = 0;
//    for (int &d : def) {
//        if (ciel.empty() || d >= ciel.back()) {
//            cout << damage1 << "\n";
//            return 0;
//        }
//        ciel.erase(upper_bound(all(ciel), d));
//    }
//    
//    for (int &a : atk) {
//        if (ciel.empty() || a > ciel.back()) {
//            cout << damage1 << "\n";
//            return 0;
//        }
//        
//        damage2 += *lower_bound(all(ciel), a) - a;
//        ciel.erase(lower_bound(all(ciel), a));
//    }
//    damage2 += accumulate(all(ciel), 0);
//    
//    cout << max(damage1, damage2) << "\n";
//}
