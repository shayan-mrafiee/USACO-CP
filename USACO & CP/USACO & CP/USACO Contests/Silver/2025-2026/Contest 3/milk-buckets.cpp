#include <bits/stdc++.h>

using namespace std;
using ll = long long; 

vector<int> a;
set<int> s; 

ll ceil(ll a, ll b) {
    return a/b + (a % b > 0);
}

void update(int i) {
    if (i && a[i] > a[i-1]) s.insert(i);
    else s.erase(i);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N; cin >> N; 
    a.resize(N);

    for (int &i : a) cin >> i;
    for (int i = 0; i < N; i++) 
        update(i);

    int Q; cin >> Q;
    while (Q--) {
        int i, v; ll t;
        cin >> i >> v >> t;
        a[--i] = v;
        update(i);
        if (i < N-1) update(i+1);

        ll x = max(t - N + 1, 0LL) / (a[0] + 1);
        for (int i : s) {
            int m = ceil(a[i], a[i-1]);
            x /= m; 
            if (!x) break; 
        }

        cout << a.back() * x << "\n";
    }
}