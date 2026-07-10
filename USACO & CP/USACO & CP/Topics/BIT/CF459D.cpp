#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int n; 
vector<int> bit; 

void update(int val) {
    while (val <= n) {
        bit[val]++; 
        val += val & -val; 
    }
}

ll get(int i) {
    ll res = 0;  
    while (i) {
        res += bit[i]; 
        i -= i & -i;
    }
    return res; 
}

ll get(int l, int r) {
    return get(r) - get(l-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n; 
    bit.resize(n+1);
    vector<int> a(n), b(n); // b[j] = f(j, n-1, a[j])

    for (int &i : a) cin >> i; 

    map<int, int> mp; 
    for (int j = n-1; j >= 0; j--) {
        b[j] = ++mp[a[j]];
    }

    mp.clear();
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        update(++mp[a[i]]);
        int j = i+1; 
        if (j < n) {
            ans += get(b[j]+1, n);
        }
    }

    cout << ans << "\n";
}