//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1045
#include <bits/stdc++.h>
using namespace std;

int A, B; 
void solve() {
    int a1 = A, b1 = B, x = 1, y = 0, x1 = 0, y1 = 1; 
    while (b1) {
        int q = a1/b1; 
        tie(x, x1) = make_tuple(x1, x - q*x1); 
        tie(y, y1) = make_tuple(y1, y - q*y1); 
        tie(a1, b1) = make_tuple(b1, a1 - q*b1); 
    }

    cout << x << " " << y << " " << a1 << "\n"; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0); 

    while (cin >> A >> B) {
        solve(); 
    }
}