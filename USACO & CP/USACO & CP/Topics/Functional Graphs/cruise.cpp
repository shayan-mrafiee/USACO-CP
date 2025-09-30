//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Node {
//    int l, r;
//};
//
//vector<Node> ports;
//string path;
//int succ(int u) {
//    for (char c : path) {
//        if (c == 'L') u = ports[u].l;
//        else u = ports[u].r;
//    }
//    
//    return u;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    freopen("cruise.in", "r", stdin);
//    freopen("cruise.out", "w", stdout);
//    
//    int N, M, K; cin >> N >> M >> K;
//    ports.resize(N);
//    
//    for (auto &[l, r] : ports) {
//        cin >> l >> r;
//        --l; --r;
//    }
//    
//    while(M--) {
//        char c; cin >> c;
//        path.push_back(c);
//    }
//    
//    int firstNode = -1, length = 1;
//    // Floyd's algo for finding the cycle
//    int a = succ(0), b = succ(succ(0));
//    while(a != b) {
//        a = succ(a);
//        b = succ(succ(b));
//    }
//    a = 0;
//    while(a != b) {
//        a = succ(a);
//        b = succ(b);
//    }
//    firstNode = a;
//    
//    // for length
//    b = succ(a);
//    while(a != b) {
//        b = succ(b);
//        length++;
//    }
//    
//    a = 0;
//    while(a != b && K) {
//        a = succ(a);
//        K--;
//    }
//    
//    K %= length;
//    while(K--) {
//        a = succ(a);
//    }
//    
//    cout << a+1 << "\n";
//}
