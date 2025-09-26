#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

struct Cow {
    int a, v;
};

vector<Cow> cows;
vector<bool> visited;
ll max_moos = 0;

int min_moo_in_cycle(int u) {
    int min_moo = cows[u].v;
    int v = cows[u].a;
    
    while(v != u) {
        min_moo = min(min_moo, cows[v].v);
        v = cows[v].a;
    }
    
    return min_moo;
}

void dfs(int u) {
    visited[u] = true;
    
    max_moos += cows[u].v;
    if (visited[cows[u].a]) {
        max_moos -= min_moo_in_cycle(cows[u].a);
    }
    else dfs(cows[u].a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int N; cin >> N;
    cows.resize(N);
    visited.resize(N);
    
    for (auto &[a, v] : cows) cin >> a >> v;
    
    
}
