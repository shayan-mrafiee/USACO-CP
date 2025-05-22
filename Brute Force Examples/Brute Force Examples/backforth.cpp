//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//vector<int> barn1Sizes (10), barn2Sizes (10);
//unordered_set<int> readings;
//
//void test(int a, int b, int c, int d) {
//    vector<int> v1 = barn1Sizes, v2 = barn2Sizes;
//    // Monday:
//    int tank1 = 1000, tank2 = 1000;
//    
//    // Tuesday:
//    int bucket = v1[a];
//    v1.erase(v1.begin() + a);
//    tank1 -= bucket;
//    tank2 += bucket;
//    v2.push_back(bucket);
//    
//    // Wednesday:
//    bucket = v2[b];
//    tank2 -= bucket;
//    tank1 += bucket;
//    v2.erase(v2.begin() + b);
//    v1.push_back(bucket);
//    
//    // Thursday:
//    bucket = v1[c];
//    tank1 -= bucket;
//    tank2 += bucket;
//    v1.erase(v1.begin() + c);
//    v2.push_back(bucket);
//    
//    // Friday:
//    bucket = v2[d];
//    tank2 -= bucket;
//    tank1 += bucket;
//    readings.insert(tank1); 
//    
//}
//
//int main() {
//    freopen("backforth.in", "r", stdin);
//    freopen("backforth.out", "w", stdout);
//    
//    for (int i = 0; i < 10; i++)
//        cin >> barn1Sizes[i];
//    for (int i = 0; i < 10; i++)
//        cin >> barn2Sizes[i];
//    
//    for (int a = 0; a < 10; a++) {
//        for (int b = 0; b < 11; b++) {
//            for (int c = 0; c < 10; c++) {
//                for (int d = 0; d < 11; d++) {
//                    test(a, b, c, d);
//                }
//            }
//        }
//    }
//    
//    cout << readings.size() << endl;
//}
