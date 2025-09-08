//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("moobuzz.in", "r", stdin);
//    freopen("moobuzz.out", "w", stdout);
//    
//    int N; cin >> N;
//    
//    int prev = 0;
//    while(prev != N) {
//        int next = N + N/3 + N/5 - N/15 - prev/3 - prev/5 + prev/15;
//        prev = N;
//        N = next;
//    }
//    
//    cout << N << "\n";
//}
