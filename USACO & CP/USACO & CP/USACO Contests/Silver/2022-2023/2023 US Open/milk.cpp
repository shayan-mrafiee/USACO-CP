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
//    int N; cin >> N;
//    vector<ll> sorted_a(N);
//    map<int, ll> a; // original array
//    map<ll, int> idx; // indx in sorted_a
//    ll T = 0;
//    
//    for (int i = 0; i < N; i++) {
//        cin >> sorted_a[i];
//        a[i+1] = sorted_a[i];
//    }
//    
//    sort(all(sorted_a));
//    for (int i = 0; i < N; i++) {
//        T += sorted_a[i] * (i+1);
//        idx[sorted_a[i]] = i+1;
//    }
//    
//    vector<ll> prefix(N+1);
//    for (int i = 0; i < N; i++) {
//        prefix[i+1] = prefix[i] + sorted_a[i];
//    }
//    
//    
//    
//    int Q; cin >> Q;
//    while (Q--) {
//        int i, j; cin >> i >> j;
//        if (j < a[i]) {
//            ll pos_j = upper_bound(all(sorted_a), j) - sorted_a.begin()+1;
//            cout << T - 1LL *a[i] * idx[a[i]] + j * pos_j + prefix[idx[a[i]]-1] - prefix[pos_j-1] << "\n";
//        }
//        else if (j > a[i]) {
//            ll pos_j = lower_bound(all(sorted_a), j) - sorted_a.begin();
//            cout << T - 1LL * a[i] * idx[a[i]] + j * pos_j - (prefix[pos_j] - prefix[idx[a[i]]]) << "\n";
//        }
//        
//        else cout << T << "\n";
//    }
//}
