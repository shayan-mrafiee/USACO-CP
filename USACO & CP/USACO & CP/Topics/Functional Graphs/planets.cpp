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
//    int n; cin >> n;
//    vector<int> succ(n), ans(n, -1);
//    
//    for (int &t : succ) {
//        cin >> t;
//        t--;
//    }
//    
//    stack<int> s;
//    for (int x = 0; x < n; x++) {
//        if (ans[x] != -1) continue;
//        
//        s.push(x);
//        ans[x] = 0;
//        int a = succ[x];
//        while(ans[a] == -1) {
//            s.push(a);
//            ans[a] = 0;
//            a = succ[a];
//        }
//        int cycleLength = 1;
//        if (ans[a]) goto last;
//        for (int b = succ[a]; a != b; b = succ[b]) cycleLength++;
//        while(s.top() != a) {
//            ans[s.top()] = cycleLength;
//            s.pop();
//        }
//        ans[s.top()] = cycleLength;
//        s.pop();
//        
//        last:
//        while(!s.empty()) {
//            ans[s.top()] = 1 + ans[succ[s.top()]];
//            s.pop();
//        }
//    }
//    
//    for (int &i : ans) cout << i << " ";
//    cout << "\n";
//}
