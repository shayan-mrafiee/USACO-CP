//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4628
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

ll ans; 

ll gcd(ll a, ll b, ll &x, ll &y) {
    x = 1, y = 0; 
    ll x1 = 0, y1 = 1; 
    while (b) {
        ll q = a/b; 
        tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);
        tie(a, b) = make_tuple(b, a - q*b);
    }
    return a; 
}

void solve_diophantine(ll a, ll b, ll c, ll g, ll x, ll y) { // ax + by = c
    if (c % g) return; 
    x *= c/g, y *= c/g; 

    ll lower = -x * g / b; lower += (x < 0 && x * g % b);
    ll upper = y * g / a; upper -= (y < 0 && y * g % a); 
    
    if (lower <= upper) ans += upper - lower + 1; 
}

void solve(int c) {
    ll A, B, C, P; 
    cin >> A >> B >> C >> P; 
    ll x, y;
    ll g = gcd(A, B, x, y);

    // Ax + By + Cz = P
    for (ll z = 0; C*z <= P; z++) {
        solve_diophantine(A, B, P - C*z, g, x, y);
    }

    cout << "Case " << c << ": " << ans << "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; cin >> T; 
    for (int i = 1; i <= T; i++) {
        ans = 0; 
        solve(i); 
    }
}