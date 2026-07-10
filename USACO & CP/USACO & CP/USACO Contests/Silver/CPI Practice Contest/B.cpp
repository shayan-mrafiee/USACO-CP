#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k; cin >> n >> k;
    vector<pair<int, int>> salads(n);
    vector<ll> days(n);

    for (auto &[a, _] : salads) cin >> a; 
    for (int i = 0; i < n; i++) {
        int d; cin >> d; 
        days[--d] += salads[i].first;
        salads[i].second = d; 
    }

    int best_day = max_element(all(days)) - days.begin(); 
    int l = 0, r = 0; 
    ll cur = 0, best = 0; 
    while (r < n) {
        if (r - l + 1 < k && r+1 < n) {
            r++; 
            cur += (salads[r].second != best_day) * salads[r].first; 
            best = max(cur, best);
        }
        else if (l < r) {
            cur -= (salads[l].second != best_day) * salads[l].first; 
            l++; 
            best = max(best, cur);
        }
        else break;
    }

    cout << days[best_day] + best << "\n";
}