#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

bool check(const vector<int> &v, const vector<int> &target, int i) {
    multiset<int> res;
    for (int j = 0; j < v.size(); j++) {
        if (j == i) {
            res.insert(v[j]); 
        }
        else {
            res.insert(v[i] ^ v[j]);
        }
    }

    return res == multiset<int>(all(target)); 
}

void solve() {
    int n; cin >> n; 
    vector<int> a(n), b(n);

    for (int &i : a) cin >> i; 
    for (int &i : b) cin >> i;

    if (multiset<int>(all(a)) == multiset<int>(all(b))) {
        cout << "YES\n";
        return; 
    }

    auto do_xor = [](const int &a, const int &b) { return a ^ b; };

    int xor_a = accumulate(all(a), 0, do_xor), xor_b = accumulate(all(b), 0, do_xor);
    int changer = xor_a ^ xor_b;

    int i = find(all(b), changer) - b.begin();
    if (i >= n) {
        cout << "NO\n";
        return; 
    }

    cout << (check(b, a, i) ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}