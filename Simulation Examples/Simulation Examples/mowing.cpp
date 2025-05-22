//#include <fstream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    ifstream cin ("mowing.in");
//    ofstream cout ("mowing.out");
//    
//    int n; cin >> n;
//    vector<vector<int>> history = {{0,0}};
//    int minTime = 1000;
//    for (int i = 1; i <= n; i++) {
//        char direction; int steps;
//        cin >> direction >> steps;
//        int x = history[history.size()-1][0]; int y = history[history.size()-1][1];
//        int xfac, yfac; xfac = yfac = 0;
//        switch(direction) {
//            case 'N':
//                yfac = 1; break;
//            case 'E':
//                xfac = 1; break;
//            case 'S':
//                yfac = -1; break;
//            case 'W':
//                xfac = -1; break;
//        }
//        for (int j = 0; j < steps; j++) {
//            x += xfac;
//            y += yfac;
//            vector<int> cords = {x,y};
//            //cout << "cords = [" << x << ", " << y << "] \n";
//            int exist = count(history.begin(), history.end(), cords);
//            //cout << "exist = " << exist << endl;
//            if (exist > 0) {
//                int last = history.rend() - find(history.rbegin(), history.rend(), cords);
//                //cout << "last = " << last << endl;
//                int time = history.size() - last + 1;
//                //cout << "time = " << time << endl;
//                //cout << "encountered a spot that stepped on before at time " << last << " and now is stepping on at time " << history.size() << endl;
//                minTime = min(time, minTime);
//                
//            }
//            history.push_back(cords);
//            //cout << "history.end() = [" << history[history.size()-1][0] << ", " << history[history.size()-1][1] << "]" << endl;
//        }
//        
//    }
//    minTime = (minTime == 1000) ? -1 : minTime;
//    cout << minTime << endl;
//    /*for (vector<int> i : history) {
//        cout << "[" << i[0] << " , " << i[1] << "] \n";
//    } */
//    
//}
