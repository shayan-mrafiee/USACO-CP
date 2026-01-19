#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; string s; 
    cin >> n >> s; 

    set<int> indecies; 
    int l = 0, r = n-1; 
    while (l <= r) {
        if (s[l] != '1') {
            l++; 
        }
        else if (s[r] != '0') {
            r--; 
        }
        else {
            indecies.insert(l++); 
            indecies.insert(r--);
        }
    }
    
    if (indecies.empty()) {
        cout << "Bob\n";
    }
    else {
        cout << "Alice\n";
        cout << indecies.size() << "\n";
        for (int i : indecies) {
            cout << i+1 << " "; 
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}