#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

ll gcd(ll a, ll b, ll &x, ll &y) {
    x = 1, y = 0; 
    ll x1 = 0, y1 = 1; 
    while (b) {
        ll q = a / b; 
        tie(x, x1) = make_pair(x1, x - q * x1); 
        tie(y, y1) = make_pair(y1, y - q * y1); 
        tie(a, b) = make_pair(b, a - q * b); 
    }

    return a; 
}

ll floor(ll a, ll b) { return a/b - (a < 0 && a % b); }
ll ceil(ll a, ll b) { return a/b + (a > 0 && a % b); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, p; int a, b;
    cin >> n >> p >> a >> b; 

    // x * w + y*d = p
    ll x, y, g = gcd(a, b, x, y);

    if (p % g) return (cout << "-1\n", 0); 
    x *= p/g, y *= p/g; 

    if (x < 0) {
        ll k = ceil(-x * g, b);
        x += k * b/g, y -= k * a/g;
        if (x > n || y < 0) return (cout << "-1\n", 0);
    }
    if (y < 0) {
        ll k = ceil(-y * g, a);
        x -= k * b/g, y += k * a/g;
        if (x < 0 || y > n) return (cout << "-1\n", 0);
    }
    if (x > n) { // TODO 
        ll k = ceil(-y * g, a);
        x -= k * b/g, y += k * a/g;
        if (x < 0 || y > n) return (cout << "-1\n", 0);
    }
    if (y > n) { // TODO
        ll k = ceil(-x * g, b);
        x += k * b/g, y -= k * a/g;
        if (x > n || y < 0) return (cout << "-1\n", 0);
    }
    

    if (x*a + y*b != p || x + y > n || x < 0 || y < 0) return (cout << "-1\n", 0);

    cout << x << ' ' << y << " " << n - x - y << "\n"; 
}