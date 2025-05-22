//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    freopen("breedflip.in", "r", stdin);
//    freopen("breedflip.out", "w", stdout);
//    
//    int n; cin >> n;
//    string a,b; cin >> a >> b;
//    int flip = 0;
//    
//    string substring;
//    
//    for (int i = 0; i < n; i++) {
//        if (a[i] != b[i])
//            substring.push_back(b[i]);
//        else if (!substring.empty()){
//            flip++;
//            substring.erase();
//        }
//    }
//    
//    cout << flip << endl; 
//}
