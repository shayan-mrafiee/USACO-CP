//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    double Dx, Dy, Ds, Bx, By, Bs;
//    cin >> Dx >> Dy >> Ds >> Bx >> By >> Bs;
//    char dir; cin >> dir;
//    
//    double T = 0;
//    if (Ds == 0 && (Dx != Bx || Dy != By)) {
//        cout << "-1\n";
//        return 0;
//    }
//    if (Bs == 0) {
//        T += (abs(Dx - Bx) + abs(Dy - By))/Ds;
//    }
//    else if (dir == 'U') {
//        T += 1.0 * abs(Dx - Bx)/Ds;
//        By += T * Bs;
//        if (Dy < By) {
//            if (Bs >= Ds) {
//                cout << "-1\n"; return 0;
//            }
//            T += abs((By - Dy)/(Ds - Bs));
//        }
//        else {
//            T += abs((Dy - By)/(Ds + Bs));
//        }
//    }
//    else if (dir == 'D') {
//        T += 1.0 * abs(Dx - Bx)/Ds;
//        By -= T * Bs;
//        if (Dy > By) {
//            if (Bs >= Ds) {
//                cout << "-1\n"; return 0;
//            }
//            T += (Dy - By)/(Ds - Bs);
//        }
//        else {
//            T += (By - Dy)/(Ds + Bs);
//        }
//    }
//    else if (dir == 'R') {
//        T += abs(Dy - By)/Ds;
//        Bx += T * Bs;
//        if (Dx < Bx) {
//            if (Bs >= Ds) {
//                cout << "-1\n"; return 0;
//            }
//            T += abs((Bx - Dx)/(Ds - Bs));
//        }
//        else {
//            T += (Dx - Bx)/(Ds + Bs);
//        }
//    }
//    else {
//        T += 1.0 * abs(Dy - By)/Ds;
//        Bx -= T * Bs;
//        if (Dx > Bx) {
//            if (Bs >= Ds) {
//                cout << "-1\n"; return 0;
//            }
//            T += (Dx - Bx)/(Ds - Bs);
//        }
//        else {
//            T += (Bx - Dx)/(Ds + Bs);
//        }
//    }
//    
//    cout << ceil(T) << "\n";
//}
