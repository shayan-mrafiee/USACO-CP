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
ll max_moo = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
    
    int N; cin >> N;
    cows.resize(N);
    cycle = vector<pair<int, int>>(N, {-1, -1});
    
    for (auto &[a, v] : cows) {
        cin >> a >> v;
        a--;
    }
    
    
}
