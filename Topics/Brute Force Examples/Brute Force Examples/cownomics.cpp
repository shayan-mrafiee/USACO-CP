//#include <iostream>
//#include <vector>
//#include <cstdio>
//
//using namespace std;
//
//vector<string> spotty, plain;
//
//bool test(int i, int j, int h) {
//    for (int k = 0; k < spotty.size(); k++) {
//        string set = "";
//        set.push_back(spotty[k][i]);
//        set.push_back(spotty[k][j]);
//        set.push_back(spotty[k][h]);
//        for (int n = 0; n < plain.size(); n++) {
//            if (plain[n][i] == set[0] && plain[n][j] == set[1] && plain[n][h] == set[2]) return false; 
//        }
//    }
//    //cout << i << ' ' << j << ' ' << h << endl;
//    return true;
//}
//
//int main() {
//    freopen("cownomics.in", "r", stdin);
//    freopen("cownomics.out", "w", stdout);
//    
//    int N, M; cin >> N >> M;
//    int sets = 0;
//    for (int i = 0; i < N; i++) {
//        string genome; cin >> genome;
//        spotty.push_back(genome);
//    }
//    for (int i = 0; i < N; i++) {
//        string genome; cin >> genome;
//        plain.push_back(genome);
//    }
//    
//    for (int i = 0; i < M-2; i++)
//        for (int j = i+1; j < M-1; j++)
//            for (int h = j + 1; h < M; h++) {
//                if (test(i, j, h)) sets++;
//            }
//    
//    cout << sets << endl;
//    
//                
//}
