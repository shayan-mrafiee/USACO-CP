#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

vector<set<int>> adj; 
bool possible = true; 
int nodes = 0; 

void dfs(int u) {

}

void solve() {
    int n; cin >> n; 
    nodes = 0; 
    adj.clear(); adj.resize(n);

    for (int i = 0; i < n; i++) {
        string s; cin >> s; 
        for (int j = 0; j < n && possible; j++) {
            if (j == i && s[j] != '1') possible = false; 
            else if (j != i && s[j] == '1') {
                adj[i].insert(j);
                nodes++; 
            }
        }
    }

    if (!possible) {
        cout << "No\n"; 
        return; 
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}