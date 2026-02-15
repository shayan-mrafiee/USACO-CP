#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>; 

int main() {
    int S; cin >> S; 
    vector<pair<pii, pii>> pattern(S); 

    for (auto &[p1, p2] : pattern) {
        auto &[x1, y1] = p1; 
        auto &[x2, y2] = p2; 
        cin >> x1 >> y1 >> x2 >> y2; 

        if (p1 > p2) swap(p1, p2);
    }

    int N; cin >> N; 
    set<pair<pii, pii>> shape_lines;
    set<pii> points; 
    for (int i = 0; i < N; i++) {
        pair<int, int> p1, p2; 
        auto &[x1, y1] = p1; 
        auto &[x2, y2] = p2; 
        cin >> x1 >> y1 >> x2 >> y2; 

        if (p1 > p2) swap(p1, p2);

        shape_lines.insert({p1, p2});
        points.insert(p1); 
        points.insert(p2);
    }

    int ans = 0; 

    for (auto [x, y] : points) {
        int dx = x - pattern[0].first.first,
        dy = y - pattern[0].first.second; 

        bool ok = true; 
        for (auto [p1, p2] : pattern) {
            auto &[x1, y1] = p1; 
            auto &[x2, y2] = p2; 
            x1 += dx; 
            x2 += dx; 
            y1 += dy; 
            y2 += dy; 

            if (p1 > p2) swap(p1, p2);

            if (!shape_lines.count({p1, p2})) {
                ok = false; 
                break; 
            }
        }

        ans += ok; 
    }

    cout << ans << "\n";
}