#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    string s; cin >> s; 

    int idx1 = -1, idx2 = -1; // idx1 is aba, idx2 = abc
    for (int i = 1; i < n-1; i++) {
        if (s[i] != s[i-1] && s[i-1] == s[i+1]) {
            idx1 = i;
            break; 
        }

        else if (idx2 == -1 && s[i] != s[i-1] && s[i] != s[i+1]) {
            idx2 = i; 
        }
    }

    if (idx1 > 0) s.erase(idx1, 1);
    else if (idx2 > 0) s.erase(idx2, 1);

    string f = s.substr(0, 1);
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i-1]) {
            f.push_back(s[i]);
        }
    }

    cout << f.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}