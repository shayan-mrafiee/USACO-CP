#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
    
    int n; string s;
    cin >> n >> s;
    
    set<char> types;
    for (char &c : s) types.insert(c);
    
    int ans = 1e5, l = 0;
    map<char, int> number;
    
    for (int r = 0; r < n; r++) {
        number[s[r]]++;
        while(l < r && number.count(s[l]) && number[s[l]] > 1) {
            number[s[l]]--;
            l++;
        }
        
        if (number.size() == types.size()) ans = min(ans, r - l + 1);
    }
    
    cout << ans << "\n";
}
