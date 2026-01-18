//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//map<int, int> ocr;
//set<int> visited;
//ll ans = 0;
//int A, B;
//
//void dfs(int id, int before) {
//    visited.insert(id);
//    
//    int n = min(ocr[before], ocr[id]);
//    ocr[id] -= n;
//    ocr[before] -= n;
//    ans += n;
//    
//    int a = A - id, b = B - id;
//    for (int next : {a, b}) {
//        if (next == id || next == before || !ocr.count(next)) continue;
//        n = min(ocr[next], ocr[id]);
//        ocr[id] -= n;
//        ocr[next] -= n;
//        ans += n;
//        if (!visited.count(next))
//            dfs(next, id);
//        break;
//    }
//}
//
//int main() {
//    int N; cin >> N >> A >> B;
//    
//    vector<int> ids(N);
//    for (int i = 0; i < N; i++) {
//        int n, d; cin >> n >> d;
//        ids[i] = d;
//        ocr[d] = n;
//    }
//    
//    vector<int> starter_ids;
//    for (int id : ids) {
//        bool possible = false;
//        if (2*id != A && ocr.count(A - id)) {
//            possible = true;
//        }
//        if (2*id != B && ocr.count(B - id) && A != B) {
//            possible = !possible;
//        }
//        if (possible)
//            starter_ids.push_back(id);
//    }
//    
//    for (int id : starter_ids) {
//        if (!visited.count(id))
//            dfs(id, -1);
//    }
//    
//    for (int id : ids) {
//        if (2*id == A || 2*id == B)
//            ans += ocr[id]/2;
//    }
//    
//    cout << ans << "\n";
//}
