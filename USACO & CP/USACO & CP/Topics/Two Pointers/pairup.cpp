//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//struct Cow {
//    int number, milk;
//};
//
//int main() {
//    freopen("pairup.in", "r", stdin);
//    freopen("pairup.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<Cow> cows (N);
//    for (Cow &c : cows) cin >> c.number >> c.milk;
//    
//    sort(cows.begin(), cows.end(), [](const Cow &a, const Cow &b) {
//        return a.milk < b.milk;
//    });
//    
//    int l = 0, r = cows.size()-1, time = 0;
//    while (l < r) {
//        time = max(time, cows[l].milk + cows[r].milk);
//        if (cows[l].number == cows[r].number) {
//            l++; r--;
//        }
//        else if (cows[l].number < cows[r].number) {
//            cows[r].number -= cows[l].number;
//            l++;
//        }
//        else {
//            cows[l].number -= cows[r].number;
//            r--;
//        }
//    }
//    
//    cout << time << "\n"; 
//}
