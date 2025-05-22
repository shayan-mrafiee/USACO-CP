#include <bits/stdc++.h>

using namespace std;

int solveForX(int a, int b, int c) {
    for (int x = 0;; x++) {
        if ((c - a*x) % b == 0)
            return x % b;
    }
    return 0;
}

void solveForY(int x, int a, int b, int c) {
    int r = (-a*x + c)/b;
    int k = -a;
    cout << "y = " << k << "k";
    if (r < 0) cout << " - " << -r << endl;
    else if (r == 0) {
        cout << endl;
        return;
    }
    else cout << " + " << r << endl;
}

int main() {
    int a, b, c;
    cout << "ax + by = c" << endl;
    cout << "a = ";
    cin >> a;
    
    cout << "b = ";
    cin >> b;
    
    cout << "c = ";
    cin >> c;
    
    cout << "solving for " << a << "x " << ((b < 0) ? "- " : "+ ") << abs(b) << "y = " << c << endl; 
    
    if (c % gcd(a,b) != 0) {
        cout << "No solution.\n";
        return 0;
    }
    
    int r = solveForX(a, b, c);
    cout << "x = " << b << "k";
    if (r > 0) cout << " + " << r << endl;
    else cout << endl;
    solveForY(r, a, b, c);
}
