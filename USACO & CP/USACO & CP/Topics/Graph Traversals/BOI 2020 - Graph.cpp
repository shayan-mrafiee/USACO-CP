#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()
#define impossible return (possible = false, 0)

vector<vector<pair<int, short>>> adj; 
vector<array<short, 2>> info; // sign, base
vector<double> ans; 
vector<int> cur_nodes; 

bool is_fixed = false, possible = true; 
double fixed_x = 0.0;

bool dfs(int u, short s, short b) {
    info[u] = {s, b};

    for (auto [v, c] : adj[u]) {
        if (info[v][0]) { // visited previously 
            if (info[v][0] != s && info[v][1] + b != c) impossible; 
            if (info[v][0] == s) {
                double x = s * (c - b - info[v][1]) / 2.0; 
                if (is_fixed && x != fixed_x) impossible; 
                is_fixed = true; 
                fixed_x = x; 
            }
        }
        else dfs(v, -s, c-b);
        
        if (!possible) return 0;
    }

    cur_nodes.push_back(u);
    return 0; 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
   
   int N, M; cin >> N >> M;
   adj.resize(N);
   info.resize(N);
   ans.resize(N);

   while (M--) {
       int a, b, c;
       cin >> a >> b >> c; 
       adj[--a].push_back({--b, c});
       adj[b].push_back({a, c});
   }

    for (int u = 0; u < N; u++) {
        if (info[u][0]) continue; 
        
        is_fixed = false; 
        fixed_x = 0.0;
        cur_nodes.clear();
        dfs(u, 1, 0);
        if (!possible) break; 

        if (!is_fixed) {
            vector<int> cands; 
            for (int i : cur_nodes) {
                cands.push_back(-info[i][0] * info[i][1]);
            }
            sort(all(cands));
            fixed_x = cands[cands.size()/2];
        }

        for (int i : cur_nodes) {
            ans[i] = info[i][0] * fixed_x + info[i][1];
        }
    }

    if (!possible) return (cout << "NO\n", 0);

    cout << "YES\n";
    for (double d : ans)
        cout << d << " ";
    cout << "\n";
}
