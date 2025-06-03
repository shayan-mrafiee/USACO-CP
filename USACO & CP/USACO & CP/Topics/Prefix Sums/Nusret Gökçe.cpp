//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int n, m; cin >> n >> m;
//    vector<int> salt(n), prefix(n), suffix(n);
//    
//    for (int &s : salt) cin >> s;
//    
//    prefix[0] = salt[0]; 
//    for (int i = 1; i < n; i++) {
//        prefix[i] = max(prefix[i-1]-m, salt[i]);
//    }
//    
//    suffix[n-1] = salt[n-1];
//    for (int i = n-2; i >= 0; i--) {
//        suffix[i] = max(suffix[i+1]-m, salt[i]);
//    }
//    
//    for (int i = 0; i < n; i++)
//        cout << max(prefix[i], suffix[i]) << ' ';
//    cout << "\n";
//}
