#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()

struct Cow {
    int a, v;
};

vector<Cow> cows;
vector<pair<int, int>> cycle;
vector<vector<int>> cycles;
vector<ll> cycle_sum;
ll max_moo = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
    
    int N; cin >> N;
    cows.resize(N);
    cycle = vector<pair<int, int>>(N, {-2, -2});
    
    for (auto &[a, v] : cows) {
        cin >> a >> v;
        a--;
    }
    
    ll cur_moo = 0;
    stack<int> s;
    for (int u = 0; u < N; u++) {
        if (cycle[u].first > -1) {
            int n = cycles[cycle[u].first].size(),
            i = cycle[u].first, j = cycle[u].second;
            cur_moo += cycle_sum[i] - cycles[i][(j + n-1) % n];
            max_moo = max(max_moo, cur_moo);
            cur_moo = 0;
        }
        
        else if (cycle[u].first == -1) {
            cycles.push_back({});
            cycle_sum.push_back(0);
            while(s.top() != u) {
                
            }
            cycles.back().push_back(u);
            cycle[u] = {cycles.size()-1, cycles.back().size()-1};
            cycle_sum.back() += cows[u].v;
            s.pop();
        }
        
        else {
            cycle[u].first = -1;
            cur_moo += cows[u].v;
            s.push(u);
        }
    }
    
    cout << max_moo << "\n";
}
