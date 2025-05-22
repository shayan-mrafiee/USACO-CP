//#include <iostream>
//#include <tuple>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//tuple<int, int, int> test(int n, string s) {
//    
//    if (s[0] == 'F' || *(s.end()-1) == 'F')
//        return {0, n, 1};
//    
//    else if (s[0] == *(s.end()-1))
//        return {(n+1) % 2, n + 1, 2};
//    
//    else
//        return {n % 2, n, 2};
//}
//
//int main() {
//    int N; cin >> N;
//    string S; cin >> S;
//    tuple<int, int, int> possible = {0, 0, 3};
//    
//    if(count(S.begin(), S.end(), 'F') == N) {
//        cout << N << endl;
//        for (int i = 0; i < N; i++) cout << i << endl;
//        return 0;
//    }
//    string s;
//    int n = 0;
//    bool checkedLast = false;
//    for (char c : S) {
//        checkedLast = false;
//        if (c == 'F') {
//            s.push_back(c);
//            n++;
//        }
//        else if (c == *(s.end()-1) && s.size() == 1) {
//            get<0>(possible)++;
//            get<1>(possible)++;
//        }
//        else if (*(s.end()-1) == 'F' && c != 'F') {
//            s.push_back(c);
//            tuple<int, int, int> t = test(n, s);
//
//            get<0>(possible) += get<0>(t);
//            get<1>(possible) += get<1>(t);
//            get<2>(possible) = min(get<2>(possible), get<2>(t));
//            n = 0;
//            checkedLast = true;
//            s.erase();
//            s.push_back(c);
//        }
//        else s = c;
//    }
//    if (!checkedLast && *(s.end()-1) == 'F') {
//        tuple<int, int, int> t = test(n, s);
//        get<0>(possible) += get<0>(t);
//        get<1>(possible) += get<1>(t);
//        get<2>(possible) = min(get<2>(possible), get<2>(t));
//    }
//    
//    cout << (get<1>(possible) - get<0>(possible)) / get<2>(possible) + 1 << endl;
//    for (int i = get<0>(possible); i <= get<1>(possible); i += get<2>(possible))
//        cout << i << endl;
//}
