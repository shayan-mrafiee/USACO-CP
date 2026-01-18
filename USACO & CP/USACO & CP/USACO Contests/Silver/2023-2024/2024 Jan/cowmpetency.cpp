//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//    int N, Q, C;
//    cin >> N >> Q >> C;
//    vector<int> c(N), B(N, -1);
//    vector<bool> assigned(N, true);
//
//    for (int i = 0; i < N; i++) {
//        cin >> c[i];
//        if (!c[i]) {
//            c[i] = 1;
//            assigned[i] = false;
//        }
//    }
//
//    for (int i = 0; i < Q; i++) {
//        int a, h;
//        cin >> a >> h;
//        B[--a] = --h;
//    }
//
//    for (int i = 0; i < N;) {
//        int j = i;
//        while (i < B[j]) {
//            if (B[i] != -1 && B[i] != B[j]) {
//                cout << "-1\n";
//                return;
//            }
//            B[i++] = B[j];
//        }
//        i = max(i, j+1);
//    }
//
//    int max_before = 0, max_after = 0;
//    for (int i = 0; i < N;) {
//        max_before = max(max_before, c[i]);
//        max_after = max(max_after, c[i]);
//
//        if (B[i] == -1) {
//            i++; continue;
//        }
//
//        max_after = max(max_after, *max_element(c.begin() + i, c.begin() + B[i]));
//        if (max_before < max_after) {
//            bool ok = false;
//            for (int j = i; j >= 0; j--) {
//                if (B[j] != -1 && B[j] != B[i]) {
//                    cout << "-1\n"; return;
//                }
//                if (!assigned[j]) {
//                    ok = true;
//                    c[j] = max_after;
//                    break;
//                }
//            }
//            if (!ok) {
//                cout << "-1\n"; return;
//            }
//            max_before = max_after;
//        }
//
//        if (!assigned[B[i]]) {
//            c[B[i]] = max_before + 1;
//        }
//        if (c[B[i]] <= max_before) {
//            cout << "-1\n"; return;
//        }
//
//        i = B[i];
//    }
//
//    for (int i : c) {
//        if (i > C) {
//            cout << "-1\n"; return;
//        }
//    }
//
//    for (int i = 0; i < N; i++) {
//        cout << c[i] << (i == N-1 ? "\n" : " ");
//    }
//}
//
//int main() {
//    int T; cin >> T;
//    while (T--)
//        solve();
//}
