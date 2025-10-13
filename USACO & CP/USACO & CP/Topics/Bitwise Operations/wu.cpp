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
//    int n, m, q; cin >> n >> m >> q;
//    vector<int> w(n);
//    int ocr[1 << 12] = {};
//    int sums[1 << 12][101] = {};
//    
//    int sum_w = 0;
//    
//    for (int &i : w) {
//        cin >> i;
//        sum_w += i;
//    }
//    
//    while(m--) {
//        string s; cin >> s;
//        int num = 0;
//        for (int i = 0; i < n; i++) {
//            if (s[i] == '1') num += 1 << i;
//        }
//        ocr[num]++;
//    }
//    
//    for (int i = 0; i < (1 << 12); i++) {
//        for (int j = 0; j < (1 << 12); j++) {
//            if (!ocr[j]) continue;
//            int num = 0;
//            for (int b = 0; b < n; b++) {
//                if ((i ^ j) & (1 << b)) num += w[b];
//            }
//            if (sum_w - num <= 100) sums[i][sum_w - num] += ocr[j];
//        }
//        for (int j = 1; j <= 100; j++) sums[i][j] += sums[i][j-1];
//    }
//    
//    while(q--) {
//        string t; int k;
//        cin >> t >> k;
//        int num = 0;
//        for (int i = 0; i < n; i++) {
//            if (t[i] == '1') num += 1 << i;
//        }
//        
//        cout << sums[num][k] << "\n";
//    }
//}
