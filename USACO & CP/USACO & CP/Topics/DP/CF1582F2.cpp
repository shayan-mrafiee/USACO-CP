#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<int, int>; 
#define all(x) x.begin(), x.end()

int n; 
const int MAX_A = 5000, MAX_XOR = 8191;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    stack<int> s[MAX_XOR+1] = {};
    for (int i = 1; i <= MAX_XOR; i++) {
        for (int j = 1; j <= MAX_A; j++) {
            s[i].push(j);
        }
    }

    queue<int> q[MAX_A+1] = {};
    for (int i = 1; i <= MAX_A; i++) {
        q[i].push(0);
    }

    bitset<MAX_XOR+1> ans = 1; 
    cin >> n; 
    for (int i = 0; i < n; i++) {
        int a; cin >> a; 
        
        while (!q[a].empty()) {
            int x = q[a].front(); q[a].pop(); 

            ans[a ^ x] = 1; 
            while (!s[a ^ x].empty() && s[a ^ x].top() > a) {
                q[s[a ^ x].top()].push(a ^ x);
                s[a ^ x].pop(); 
            }
        }
    }

    cout << ans.count() << "\n";
    for (int i = 0; i <= MAX_XOR; i++) {
        if (ans[i]) cout << i << " ";
    }
}