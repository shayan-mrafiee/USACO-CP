//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int N; string breed;
//    cin >> N >> breed;
//    vector<int> E (N);
//    for (int i = 0; i < N; i++)
//        cin >> E[i];
//    
//    vector<int> G_leaders, H_leaders;
//    vector<bool> is_leader (N, false);
//    int firstG = breed.find('G'),
//    firstH = breed.find('H'),
//    lastG = breed.rfind('G'),
//    lastH = breed.rfind('H');
//    
//    if (E[firstG] > lastG) {
//        G_leaders.push_back(firstG);
//        is_leader[firstG] = true;
//    }
//    if (E[firstH] > lastH) {
//        H_leaders.push_back(firstH);
//        is_leader[firstH] = true;
//    }
//    
//    for (int i = 0; i < N; i++) {
//        switch (breed[i]) {
//            case 'G':
//                for (int j = i; j < E[i]; j++) {
//                    if (breed[j] == 'G') continue;
//                    if (is_leader[j]) {
//                        G_leaders.push_back(i);
//                        is_leader[i] = true;
//                        break;
//                    }
//                }
//                break;
//                
//            default:
//                for (int j = i; j < E[i]; j++) {
//                    if (breed[j] == 'H') continue;
//                    if (is_leader[j]) {
//                        H_leaders.push_back(i);
//                        is_leader[i] = true;
//                        break;
//                    }
//                }
//                break;
//        }
//    }
//    
//    cout << G_leaders.size() * H_leaders.size() << endl;
//}
