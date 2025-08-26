#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define all(x) x.begin(), x.end()

// LeetCode Problem
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pii> v(n);

        for (int i = 0; i < n; i++) {
            v[i] = {profits[i], capital[i]};
        }

        sort(all(v), [](const pii &a, const pii &b) {
            return a.second < b.second;
        });

        priority_queue<pii> pq;
        int max_capital = w;
        int i = 0;
        while(k--) {
            for (; i < n && v[i].second <= w; i++) pq.push(v[i]);
            if (!pq.empty()) {
                w += pq.top().first;
                pq.pop();
            }
            max_capital = max(max_capital, w);
        }

        return max_capital;
    }
};
