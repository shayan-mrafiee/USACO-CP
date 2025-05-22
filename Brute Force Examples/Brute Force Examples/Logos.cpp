//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//struct Logo {
//    int x, y;
//    char s;
//};
//
//void swap(int &a, int &b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//bool check(vector<bool> rotation, vector<Logo> permutation, vector<string> &billboard) {
//    int n = billboard.size();
//    billboard = vector<string> (n, string(n, '0'));
//    for (int b = 0; b < 3; b++) {
//        if (rotation[b]) swap(permutation[b].x, permutation[b].y);
//    }
//    
//    for (Logo logo : permutation) {
//        int i, j;
//        for (i = 0; i < n; i++)
//            for (j = 0; j < n; j++)
//                if (billboard[i][j] == '0') goto found;
//        
//        found:
//        for (int x = i; x < i + logo.x; x++) {
//            for (int y = j; y < j + logo.y; y++) {
//                if (billboard[x % n][y % n] != '0') return false; 
//                billboard[x % n][y % n] = logo.s;
//            }
//        }
//    }
//    
//    return true;
//}
//
//int main() {
//    Logo A, B, C;
//    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
//    A.s = 'A'; B.s = 'B'; C.s = 'C';
//    int n = sqrt(A.x*A.y + B.x*B.y + C.x*C.y);
//    if (n*n != A.x*A.y + B.x*B.y + C.x*C.y) {
//        cout << -1 << endl;
//        return 0;
//    }
//    
//    vector<string> billboard (n);
//    vector<vector<bool>> rotation = {{0,0,0}, {1,0,0}, {0,1,0}, {1,1,0}, {0,0,1}, {1,0,1}, {0,1,1}, {1,1,1}};
//    vector<vector<Logo>> permutation = {{A,B,C}, {A,C,B}, {B,A,C}, {B,C,A}, {C,A,B}, {C,B,A}};
//    bool possible = false;
//    for (vector<bool> r : rotation) {
//        for (vector<Logo> p : permutation) {
//            if (check(r, p, billboard)) {
//                possible = true;
//                goto output;
//            }
//        }
//    }
//    
//    output:
//    if (possible) {
//        cout << n << endl;
//        for (string s : billboard)
//            cout << s << endl;
//    }
//    
//    else cout << -1 << endl;
//}
