//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("highcard.in", "r", stdin);
//    freopen("highcard.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<bool> elsieHas(2*N + 1);
//    vector<int> elsie, bessie;
//    
//    for (int i = 0; i < N; i++) {
//        int card; cin >> card;
//        elsieHas[card] = true;
//    }
//    
//    for (int i = 1; i <= 2*N; i++) {
//        if (elsieHas[i]) elsie.push_back(i);
//        else bessie.push_back(i);
//    }
//    
//    int b = 0, e = 0, points = 0;
//    while(b < N && e < N) {
//        if (bessie[b] > elsie[e]) {
//            points++;
//            e++;
//        }
//        b++;
//    }
//    
//    cout << points << "\n";
//}
