//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int N; cin >> N;
//    vector<int> a (N), b (N);
//    vector<bool> checked (N, false);
//    int modifications = 0;
//    for (int i = 0; i < N; i++)
//        cin >> a[i];
//    for (int i = 0; i < N; i++)
//        cin >> b[i];
//    int i = 0;
//    while (a != b && i < N) {
//        if (checked[a[i]-1]) {
//            i++;
//            continue;
//        }
//        if (a[i] != b[0]) {
//            modifications++;
//        }
//        checked[b[0]-1] = true;
//        b.erase(b.begin());
//    }
//    cout << modifications << endl;
//}
