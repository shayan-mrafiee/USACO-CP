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
//    int a, b, c, m; cin >> a >> b >> c >> m;
//    vector<int> USBs, PS2s;
//    
//    for (int i = 0; i < m; i++) {
//        int val; string type;
//        cin >> val >> type;
//        if (type == "USB") USBs.push_back(val);
//        else PS2s.push_back(val);
//    }
//    
//    sort(all(USBs)); sort(all(PS2s));
//    
//    int equipped = 0, u = 0, p = 0;
//    ll cost = 0;
//    
//    while(a-- && u < USBs.size()) {
//        cost += USBs[u++];
//        equipped++;
//    }
//    while(b-- && p < PS2s.size()) {
//        cost += PS2s[p++];
//        equipped++;
//    }
//    while(c-- && (p < PS2s.size() || u < USBs.size())) {
//        if (p >= PS2s.size() || (u < USBs.size() && USBs[u] < PS2s[p]))
//            cost += USBs[u++];
//        else cost += PS2s[p++];
//        equipped++;
//    }
//    
//    cout << equipped << " " << cost << "\n";
//}
