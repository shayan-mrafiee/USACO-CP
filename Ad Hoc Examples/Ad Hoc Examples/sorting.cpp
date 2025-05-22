//#include <fstream>
//#include <vector>
//
//using namespace std;
//
//bool check(vector<int> p) {
//    int n = p.size();
//    for (int i = 0; i < n-1; i++) {
//        if (p[i+1]-p[i] != 1)
//            return false;
//    }
//    return true;
//}
//
//int main() {
//    ifstream cin ("sleepy.in");
//    ofstream cout ("sleepy.out");
//    
//    int n; cin >> n;
//    int steps = 0;
//    vector<int> p (n);
//    for(int i = 0; i < n; i++)
//        cin >> p[i];
//    
//    while (!check(p)) {
//        steps++;
//        vector<int> New;
//        int i = n-1;
//        int previous = n;
//        while (p[i] > p[0] && p[i] <= previous) {
//            //cout << "previous = " << previous << endl;
//            New.insert(New.begin(), p[i]);
//            previous = p[i];
//            i--;
//        }
//        New.insert(New.begin(), p[0]);
//        i++;
//        New.insert(New.begin(), p.begin()+1, p.begin()+i);
////        for (int i : New)
////            cout << i << " ";
////        cout << endl;
//        p = New;
//    }
//    cout << steps << endl; 
//}
