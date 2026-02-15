#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define impossible return(cout << "NO\n", 0)

// #Js in left & right must be equal bc 2 cows of the same type will always say they're next to a J cow
// #N must be even bc two cows of opposite types will say they're next to N cow
// define the type of each cow i as a two char string: left[i] and right[i]
// if there are 'NN' and 'JJ' cows, there must be 'NJ' and 'JN' cows, there must be a switch J -> N and vice versa
// therefore 'NJ' and 'JN' will be equal bc #J is the same 

// start with 'JJ's, assign them to farmer john
// put one 'JN' assign to J
// put 'NN's, assign the first to N and alternate for the rest
// put 'NJ' assign to the opposite of previous 
// alternate between JNs and NJs and assign them to appropriate farmers
// the last will be NJ and belong to farmer john. 
// * #JN = #NJ. we started with one JN, added one NJ and continued => last will be NJ
// * it will be farmer john bc it connects back to the beginning of JJ cows 

bool C;

int solve() {
    int N; cin >> N; 
    string left, right; 
    cin >> left >> right; 
    unordered_map<string, vector<int>> cows; 

    if (count(all(left), 'J') != count(all(right), 'J')
        || ((count(all(left), 'N') & 1)
        || (count(all(right), 'N')) & 1))
        impossible;

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

    for (int cow : cows["JJ"]) {
        p.push_back(cow);
    }
    p.push_back(cows["JN"].back()); cows["JN"].pop_back();
    for (int cow : cows["NN"]) {
        p.push_back(cow);
    }
    while (!cows["JN"].empty() && !cows["NJ"].empty()) {
        // add NJ cow
        p.push_back(cows["NJ"].back()); cows["NJ"].pop_back();
        // add JN cow
        p.push_back(cows["JN"].back()); cows["JN"].pop_back();
    }
    p.push_back(cows["NJ"].back()); cows["NJ"].pop_back();

    output: 
    // p
    for (int i = 0; i < N; i++) {
        cout << p[i] << " \n"[i == N-1];
    }

    // b
    bool b = 0; 
    for (int i = 0; i < N; i++) {
        if (left[p[i]-1] == 'N') b = !b;
        cout << "JN"[b]; 
    }
    return (cout << "\n", 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; cin >> T >> C; 
    while (T--) {
        solve();
    }
}