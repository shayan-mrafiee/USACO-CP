#include <bits/stdc++.h>

using namespace std; 
using ll = long long; 
#define all(x) x.begin(), x.end()
#define impossible return(cout << "NO\n", 0);
// similar cows -> J => #J should be same in left and right
// different cows -> N => #N should be even in left and right

bool C; 
int solve() {
    int N; cin >> N;
    string left, right; cin >> left >> right; 

    if (count(all(left), 'J') != count(all(right), 'J')
        || count(all(right), 'N') & 1
        || count(all(left), 'N') & 1) impossible; 

    unordered_map<string, vector<int>> cows; 
    for (int i = 0; i < N; i++) {
        string type; type += left[i]; type += right[i];
        cows[type].push_back(i+1);
    }

    if (!cows["JJ"].empty() && !cows["NN"].empty() && cows["JN"].empty() && cows["NJ"].empty())
        impossible; 
    
    cout << "YES\n";
    if (!C) return 0;

    vector<int> p; 
    if (cows["JJ"].size() == N || cows["NN"].size() == N) {
        for (int i = 1; i <= N; i++) p.push_back(i);
        goto output;
    }

    for (int cow : cows["JJ"]) p.push_back(cow);
    p.push_back(cows["JN"].back()); cows["JN"].pop_back();

    for (int cow : cows["NN"]) p.push_back(cow);

    while (!cows["NJ"].empty() && !cows["JN"].empty()) {
        p.push_back(cows["NJ"].back()); cows["NJ"].pop_back(); 
        p.push_back(cows["JN"].back()); cows["JN"].pop_back(); 
    }
    p.push_back(cows["NJ"].back());

    output: 
    for (int i = 0; i < N; i++) {
        cout << p[i] << " \n"[i == N-1]; 
    }

    bool b = 0; // 0 -> J, 1 -> N
    for (int i = 0; i < N; i++) {
        b ^= (left[p[i]-1] == 'N');
        cout << "JN"[b];
    }

    return (cout << "\n", 0);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; cin >> T >> C; 
    while (T--) {
        solve(); 
    }
}