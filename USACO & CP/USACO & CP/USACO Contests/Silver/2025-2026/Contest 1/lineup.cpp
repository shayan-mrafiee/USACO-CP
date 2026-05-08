#include <bits/stdc++.h>

using namespace std;
using ll = long long; 

// at time t, cow t/2 is @ pos t/2 - 1.

ll find_pos(ll c, ll t) {
    if (t < 2*c) return c; 
 
    ll time = 2*c; 
    ll pos = max(c-1, 0LL); 
    while (time + pos + 1 <= t) {
        time += pos + 1;
        pos = time/2; 
    }

    return pos - t + time; 
}

ll find_cow(ll x, ll t) {
    if (t < 2*x) return x; 
    if (2*x+2 == t) return x+1; 

    ll val = (t - 2*x)/3; 
    if (!val) return find_cow(0, t-1);
    return find_cow(x+val, t-val);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int Q; cin >> Q; 
    while (Q--) {
        int type; cin >> type; 
        if (type == 1) {
            ll c, t; cin >> c >> t; 
            cout << find_pos(c, t) << "\n";
        }
        else {
            ll x, t; cin >> x >> t;
            cout << find_cow(x, t) << "\n";
        }
    }
}