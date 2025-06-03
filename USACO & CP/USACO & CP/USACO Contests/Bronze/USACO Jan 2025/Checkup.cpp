//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int N; cin >> N;
//    vector<int> a (N), b (N);
//    int same = 0;
//    for (int &i : a) cin >> i;
//    for (int i = 0; i < N; i++) {
//        cin >> b[i];
//        same += (b[i] == a[i]);
//    }
//    
//    vector<int> ans (N+1, 0);
//    
//    auto expand = [&] (int l, int r) {
//        int matches = same;
//        for (; l >= 0 && r < N; l--, r++) {
//            matches += (a[l] == b[r]) + (a[r] == b[l]) - (a[l] == b[l]) - (a[r] == b[r]);
//            ans[matches]++;
//        }
//    };
//    
//    for (int l = 0; l < N; l++) {
//        expand(l, l);
//        expand(l, l+1);
//    }
//    
//    for (int i : ans)
//        cout << i << endl; 
//}
