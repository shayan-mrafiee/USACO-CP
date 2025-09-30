//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N, Q; cin >> N >> Q;
//    string S; cin >> S;
//    vector<int> prefix(N+1), suffix(N+1);
//    
//    for (int c = 0; c < 26; c++) {
//        if (S.find(c + 'A') == string::npos) continue;
//        for (int i = 0; i < N; i++) {
//            if (S[i] - 'A' != c) continue;
//            prefix[i+1]++;
//            while(i < N && (S[i] - 'A') >= c) {
//                i++;
//            }
//        }
//        
//        for (int i = N-1; i >= 0; i--) {
//            if (S[i] - 'A' != c) continue;
//            suffix[i]++;
//            while(i && S[i] - 'A' >= c) i--;
//        }
//    }
//    
//    for (int i = 1; i <= N; i++) prefix[i] += prefix[i-1];
//    for (int i = N-1; i >= 0; i--) suffix[i] += suffix[i+1];
//    
//    while(Q--) {
//        int a, b; cin >> a >> b;
//        cout << ((ll) prefix[a-1] + suffix[b]) << "\n";
//    }
//}
