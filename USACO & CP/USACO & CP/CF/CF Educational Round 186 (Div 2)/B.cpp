#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int a, b; cin >> a >> b; 
    auto layers = [](int a, int b) {
        int ans = 0;
        ll cur_size = 1; 
        bool i = true; 
        while (true) {
            if (i) { // a
                if (a >= cur_size) {
                    ans++; 
                    a -= cur_size; 
                    cur_size *= 2; 
                }
                else {
                    break; 
                }
            }
            else { // b
                if (b >= cur_size) {
                    ans++; 
                    b -= cur_size;
                    cur_size *= 2;
                }
                else 
                    break;
            }
            i = !i;
        }
        return ans; 
    };
    
    cout << max(layers(a, b), layers(b, a)) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}