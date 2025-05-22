#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;

void solve() {
    int N; cin >> N;
    ll seconds = 0;
    vector<bool> visited (N, false);
    visited[0] = true;
    vector<int> cities (N);
    visited[0] = true;
    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        cities[i] = x + y;
    }
    int cur_loc = cities[0];
    for (int not_visited = N-1; not_visited > 0; not_visited--) {
        int time = 2000000001, next_city;
        for (int i = 1; i < N; i++) {
            if (visited[i]) continue;
            int t = abs(cur_loc - cities[i]);
            if (t < time) {
                time = t;
                next_city = i;
            }
        }
        seconds += time;
        cur_loc = cities[next_city];
        visited[next_city] = true;
    }
    cout << seconds + abs(cur_loc - cities[0]) << endl;
}

int main() {
    int T; cin >> T;
    for (int i = 0; i < T; i++)
        solve();
}
