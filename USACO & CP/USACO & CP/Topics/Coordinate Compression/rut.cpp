//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Cow {
//    char direction;
//    int x, y, order;
//};
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N; cin >> N;
//    vector<Cow> cows(N);
//    vector<int> eastCows, northCows, blame(N);
//    vector<bool> stopped(N);
//    
//    for (int i = 0; i < N; i++) {
//        Cow &cow = cows[i];
//        cin >> cow.direction >> cow.x >> cow.y;
//        if (cow.direction == 'E') eastCows.push_back(i);
//        else northCows.push_back(i);
//    }
//    
//    sort(all(northCows), [cows](const int &a, const int &b) {
//        return cows[a].x < cows[b].x;
//    });
//    sort(all(eastCows), [cows](const int &a, const int &b) {
//        return cows[a].y < cows[b].y;
//    });
//    
//    for (int &n : northCows) {
//        for (int &e : eastCows) {
//            if (stopped[n] || stopped[e] || cows[n].y > cows[e].y || cows[e].x > cows[n].x) continue;
//            
//            int nCowDist = cows[e].y - cows[n].y,
//            eCowDist = cows[n].x - cows[e].x;
//            
//            if (nCowDist < eCowDist) {
//                stopped[e] = true;
//                blame[n] += blame[e] + 1;
//            }
//            
//            else if (eCowDist < nCowDist) {
//                stopped[n] = true;
//                blame[e] += blame[n] + 1;
//                break;
//            }
//        }
//    }
//    
//    for (int &i : blame) cout << i << "\n";
//}
