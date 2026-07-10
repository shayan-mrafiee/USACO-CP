#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n; 
    vector<int> a(n);

    for (int &i : a) cin >> i;

    set<int> cur; 
    auto insert_check = [&](int i = 0) {
        if (i) cur.insert(i);
        int j = 1; 
        for (int n : cur) {
            if (n != j) return false;
            j++; 
        }

        return true; 
    };

    int last_perm = -1, l = 0, r = 0;
    while (l <= r && r < n) {
        if (cur.count(a[r])) {
            if (last_perm < l) return (cout << "NO\n", 0);
            while (l <= last_perm) {
                cur.erase(a[l++]);
            }
        }
        if (insert_check(a[r])) last_perm = r;
        r++; 
    }

    cout << (insert_check() ? "YES\n" : "NO\n");
}