//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("cardgame.in", "r", stdin);
//    freopen("cardgame.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<int> firstHalf(N/2), secondHalf(N/2), bessie;
//    vector<bool> elsieHas(2*N + 1);
//    
//    for (int &i : firstHalf) {
//        cin >> i;
//        elsieHas[i] = true;
//    }
//    for (int &i : secondHalf) {
//        cin >> i;
//        elsieHas[i] = true;
//    }
//    
//    for (int i = 1; i <= 2*N; i++) {
//        if (!elsieHas[i]) bessie.push_back(i);
//    }
//    
//    sort(all(firstHalf)); sort(all(secondHalf));
//    
//    int b = 0, points = 0;
//    
//    for (int e = 0; e < N/2; e++) {
//        if (secondHalf[e] > bessie[b]) {
//            points++;
//            b++;
//        }
//    }
//    
//    int e = 0;
//    while(b < N && e < N/2) {
//        if (bessie[b] > firstHalf[e]) {
//            e++;
//            points++;
//        }
//        b++;
//    }
//    
//    cout << points << "\n";
//}
