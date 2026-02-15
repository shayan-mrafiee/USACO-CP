#include <bits/stdc++.h>

using namespace std; 
using ll = long long; 
#define all(x) x.begin(), x.end()

// O(N + C)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    int N, C; cin >> N >> C; 
    vector<int> f(C), p(N); 
    vector<int> indx_in_p(N); // rank -> indx in p

    for (int &i : f) cin >> i; 
    for (int i = 0; i < N; i++) {
        cin >> p[i];
        p[i]--; 
        indx_in_p[p[i]] = i+1;
    }

    vector<vector<int>> conts_of_criteria(C);
    vector<vector<int>> criterias_of_cont(N);
    for (int i = 0; i < N; i++) {
        int n; cin >> n; 
        criterias_of_cont[i].resize(n);
        for (int &j : criterias_of_cont[i]) {
            cin >> j; 
            j--; 
            conts_of_criteria[j].push_back(i);
        }
    }

    vector<ll> sum(N+1); // diff array
    vector<pair<int, int>> rounds(N, {INT32_MAX, 0});
    for (int i = 0; i < C; i++) {
        vector<int> &cont = conts_of_criteria[i];
        sort(all(cont));
        int n = cont.size();
        priority_queue<int, vector<int>, greater<int>> pq; 
        for (int j = 0; j < min(f[i], n); j++) {
            pair<int, int> range = {1, min(indx_in_p[cont[j]], rounds[cont[j]].first-1)};
            if (range.first > range.second) {
                f[i]++;
                continue; 
            }
            pq.push(range.second);
            rounds[cont[j]].first = min(rounds[cont[j]].first, range.first);
            rounds[cont[j]].second = max(rounds[cont[j]].second, range.second);
        }
        for (int j = f[i]; j < n; j++) {
            pair<int, int> range = {pq.top()+1, min(indx_in_p[cont[j]], rounds[cont[j]].first-1)};
            if (range.first > range.second)
                continue; 
            rounds[cont[j]].first = min(rounds[cont[j]].first, range.first);
            rounds[cont[j]].second = max(rounds[cont[j]].second, range.second);
            pq.pop(); pq.push(range.second);
        }

    }

    for (int i = 0; i < N; i++) {
        auto [a, b] = rounds[i];
        if (a == INT32_MAX)
            continue; 
        sum[a-1] += i+1; 
        sum[b] -= i+1; 
    }

    for (int i = 1; i < N; i++)
        sum[i] += sum[i-1];

    for (int i = 0; i < N; i++)
        cout << sum[i] << "\n";
}