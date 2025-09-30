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
//    int n, k; cin >> n >> k;
//    vector<int> a(n), sum(n-1);
//    
//    for (int i = 0; i < n-1; i++) {
//        int ans;
//        for (string s : {"and ", "or "}) {
//            cout << s << i+1 << " " << i+2 << endl;
//            cin >> ans;
//            sum[i] += ans;
//        }
//    }
//    
//    int val = 0;
//    for (string s : {"and 1 3", "or 1 3"}) {
//        int ans;
//        cout << s << endl;
//        cin >> ans;
//        val += ans;
//    }
//    
//    a[1] = (sum[0] + sum[1] - val)/2;
//    a[0] = sum[0] - a[1];
//    for (int i = 2; i < n; i++) {
//        a[i] = sum[i-1] - a[i-1];
//    }
//    
//    sort(all(a));
//    
//    cout << "finish " << a[k-1] << endl;
//}
