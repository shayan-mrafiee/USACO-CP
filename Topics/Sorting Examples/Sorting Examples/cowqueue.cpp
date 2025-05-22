//#include <fstream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    ifstream cin ("cowqueue.in");
//    ofstream cout ("cowqueue.out");
//    
//    int n; cin >> n;
//    vector<pair<int, int>> queue (n);
//    for (int i = 0; i < n; i++) {
//        cin >> queue[i].first >> queue[i].second;
//    }
//    sort(queue.begin(), queue.end());
//    int time = 0;
//    for (pair<int, int> p : queue) {
//        time = max(time, p.first);
//        time += p.second;
//    }
//    cout << time << endl;
//}
