#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b, c, m; 
    cin >> a >> b >> c >> m;  
    vector<pair<int, string>> mouses(m); 

    for (auto &[cost, type] : mouses) {
        cin >> cost >> type; 
    }

    sort(all(mouses));

    ll total_cost = 0;
    int equipped = 0; 
    for (auto [cost, type] : mouses) {
        if (a && type == "USB") {
            total_cost += cost; 
            equipped++; 
            a--; 
        }
        else if (b && type == "PS/2") {
            total_cost += cost; 
            equipped++; 
            b--; 
        }
        else if (c) {
            total_cost += cost; 
            equipped++;
            c--; 
        }
    }

    cout << equipped << ' ' << total_cost << "\n";
}