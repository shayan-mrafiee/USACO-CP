//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int N; cin >> N;
//    vector<ll> a(N);
//    
//    for (int i = 0; i < N/3; i++) {
//        ll ab, bc;
//        cout << "? " << 3*i+1 << " " << 3*i+2 << endl;
//        cin >> ab;
//        cout << "? " << 3*i+2 << " " << 3*i+3 << endl;
//        cin >> bc;
//        
//        ll b = gcd(ab, bc);
//        a[3*i] = ab/b;
//        a[3*i+1] = b;
//        a[3*i+2] = bc/b;
//    }
//    
//    for (int i = 1; i <= N % 3; i++) {
//        cout << "? 1 " << N-i+1 << endl;
//        ll p; cin >> p;
//        a[N-i] = p/a[0];
//    }
//    
//    cout << "! ";
//    for (ll &i : a) cout << i << " ";
//    cout << endl;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
