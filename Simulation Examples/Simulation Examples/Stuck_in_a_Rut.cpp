#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> ecows, ncows;
    map<int, long long> steps;
    map<pair<int, int>, int> order;
    for (int i = 0; i < n; i++) {
        char dir; cin >> dir;
        pair<int, int> p;
        cin >> p.first >> p.second;
        order[p] = i;
        steps[i] = 10000000000;
        switch (dir) {
            case 'E':
                ecows.push_back(p);
                break;

            case 'N':
                ncows.push_back(p);
                break;
        }
    }
    sort(ncows.begin(), ncows.end());
    sort(ecows.begin(), ecows.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.second < b.second;
    });

    for (pair<int, int> pn : ncows) {
        int xi = pn.first;
        int yi = pn.second;
        for (pair<int, int> pe : ecows) {
            int xj = pe.first;
            int yj = pe.second;
            if (xj > xi || yj < yi) continue;
            // the intersection point is (xi, yj)
            int steps_j = xi - xj;
            if (steps[order[pe]] < steps_j) continue;
            int steps_i = yj - yi;
            if (steps_j < steps_i) {
                steps[order[pn]] = steps_i;
                break;
            }
            else if (steps_i < steps_j){
                steps[order[pe]] = steps_j;
                continue;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (steps[i] == 10000000000)
            cout << "Infinity\n";
        else
            cout << steps[i] << endl;
    }

}
