//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int K, N; cin >> K >> N;
//
//    vector<string> names (N);
//    map<string, string> info;
//    map<string, int> order;
//    for (int i = 0; i < N; i++) {
//        cin >> names[i];
//        info[names[i]] = string(N, '?');
//        info[names[i]][i] = 'B';
//        order[names[i]] = i;
//    }
//    
//    for (int pub = 0; pub < K; pub++) {
//        vector<string> authors (N);
//        map<pair<string, string>, bool> are_unkown;
//        cin >> authors[0];
//        for (int i = 1; i < N; i++) {
//            cin >> authors[i];
//            for (int j = i-1; j >= 0 && authors[j] < authors[j+1]; j--)
//                are_unkown[{authors[i], authors[j]}] = true;
//        }
//        
//        for (int i = 0; i < N-1; i++) {
//            for (int j = i+1; j < N; j++) {
//                if (are_unkown[{authors[j], authors[i]}]) continue;
//                info[authors[i]][order[authors[j]]] = '0';
//                info[authors[j]][order[authors[i]]] = '1';
//            }
//        }
//    }
//    
//    for (string name : names) {
//        cout << info[name] << endl;
//    }
//}
