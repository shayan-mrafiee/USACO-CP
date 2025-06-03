//#include <fstream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    ifstream cin ("circlecross.in");
//    ofstream cout ("circlecross.out");
//    
//    string crossPoints; cin >> crossPoints;
//    int  crosspairs = 0;
//    vector<char> cows;
//    for (char c : crossPoints) {
//        if (count(cows.begin(), cows.end(), c) == 0)
//            cows.push_back(c);
//    }
//    for (int i = 0; i < 25; i++) {
//        int ocri1 = find(crossPoints.begin(), crossPoints.end(), cows[i]) - crossPoints.begin();
//        int ocri2 = find(crossPoints.begin() + ocri1 + 1, crossPoints.end(), cows[i]) - crossPoints.begin();
//        for (int j = i+1; j < 26; j++) {
//            int ocrj1 = find(crossPoints.begin(), crossPoints.end(), cows[j]) - crossPoints.begin();
//            int ocrj2 = find(crossPoints.begin() + ocrj1 + 1, crossPoints.end(), cows[j]) - crossPoints.begin();
//            
//            if (ocri2 < ocrj2 && ocri2 > ocrj1)
//                crosspairs ++; 
//        }
//    }
//    
//    
//    cout << crosspairs << endl;
//}
