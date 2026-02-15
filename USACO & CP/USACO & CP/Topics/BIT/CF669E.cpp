#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

struct query {
    int a, t, x; 
};

void update(vector<int> &tree, int i, int val) {
    while (i < (int) tree.size()) {
        tree[i] += val; 
        i += i & -i;
    }
}

int get_ocr(vector<int>& tree, int i) {
    int ocr = 0; 
    while (i) {
        ocr += tree[i];
        i -= i & -i; 
    }
    return ocr; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n; 
    vector<query> queries(n);
    map<int, set<int>> ts; 

    for (auto &[a, t, x] : queries) {
        cin >> a >> t >> x; 
        ts[x].insert(t);
    }

    map<pair<int, int>, int> comp_t; 
    for (auto &[x, s] : ts) {
        int cnt = 0; 
        for (int i : s) {
            comp_t[{x, i}] = ++cnt; 
        }
    }

    map<int, vector<int>> ocr; 
    for (auto &[_, t, x] : queries) {
        t = comp_t[{x, t}];
        ocr[x].resize(ts[x].size()+1);
    }

    
    for (auto [a, t, x] : queries) {
        if (a == 1) {
            update(ocr[x], t, 1);
        }
        else if (a == 2 && get_ocr(ocr[x], t)) {
            update(ocr[x], t, -1);
        }
        else {
            cout << get_ocr(ocr[x], t) << "\n";
        }
    }
}