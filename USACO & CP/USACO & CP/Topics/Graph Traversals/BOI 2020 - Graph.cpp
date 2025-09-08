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
//    int N, M; cin >> N >> M;
//    vector<double> value(N);
//    bool possible = true;
//    
//    while(M--) {
//        int a, b, c; cin >> a >> b >> c;
//        a--; b--; c--;
//        if (!possible) continue;
//        if (value[a] && value[b]) possible = ((value[a] + value[b]) == c);
//        else if (value[a] && !value[b]) value[b] = c - value[a];
//        else if (!value[a] && value[b]) value[a] = c - value[b];
//        else value[a] = value[b] = c/2.0;
//    }
//    
//    cout << ((possible) ? "YES\n" : "NO\n");
//    if (possible) for (double d : value) cout << d << " ";
//}
