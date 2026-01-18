//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int po2[31];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    po2[0] = 1;
//    for (int i = 1; i <= 30; i++) {
//        po2[i] = po2[i-1] * 2;
//    }
//    
//    int n; cin >> n;
//    map<int, int> ocr;
//    vector<int> a(n);
//    
//    for (int &i : a) {
//        cin >> i;
//        ocr[i]++;
//    }
//    
//    int ans = 0;
//    for (int &i : a) {
//        ocr[i]--;
//        bool remove = true;
//        for (int p : po2) {
//            if (ocr[p - i] > 0) {
//                remove = false;
//                break;
//            }
//        }
//        ans += remove;
//        if (!remove) ocr[i]++; 
//    }
//    
//    cout << ans << '\n';
//}
