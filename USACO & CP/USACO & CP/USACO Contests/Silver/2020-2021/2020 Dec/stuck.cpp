//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Cow {
//    char c; int x, y, id;
//};
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N; cin >> N;
//    vector<Cow> east_cows, north_cows;
//    vector<bool> stopped(N);
//    vector<int> blame(N);
//    
//    for (int i = 0; i < N; i++) {
//        Cow cow; cin >> cow.c >> cow.x >> cow.y;
//        cow.id = i;
//        (cow.c == 'E' ? east_cows : north_cows).push_back(cow);
//    }
//    
//    sort(all(east_cows), [](const Cow &a, const Cow &b) {
//        return a.y < b.y;
//    });
//    sort(all(north_cows), [](const Cow &a, const Cow &b) {
//        return a.x < b.x;
//    });
//    
//    for (Cow &e_cow : east_cows) {
//        for (Cow &n_cow : north_cows) {
//            if (stopped[n_cow.id] || n_cow.x < e_cow.x || n_cow.y > e_cow.y) continue;
//            if (e_cow.y - n_cow.y < n_cow.x - e_cow.x) {
//                stopped[e_cow.id] = true;
//                blame[n_cow.id] += blame[e_cow.id] + 1;
//                break;
//            }
//            
//            else if (e_cow.y - n_cow.y > n_cow.x - e_cow.x) {
//                stopped[n_cow.id] = true;
//                blame[e_cow.id] += blame[n_cow.id] + 1;
//            }
//        }
//    }
//    
//    for (int &ans : blame) cout << ans << "\n";
//}
