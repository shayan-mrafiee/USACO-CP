#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string n; cin >> n; 
    char digit = n[0];
    for (char c : n) {
        if (c < digit) break; 
        else if (c > digit) {
            digit++; 
            break; 
        }
    }

    for (int i = 0; i < n.size(); i++) cout << digit; 
    cout << "\n";
}