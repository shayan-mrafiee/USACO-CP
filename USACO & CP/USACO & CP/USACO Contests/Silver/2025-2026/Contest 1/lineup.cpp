#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll find_pos(ll c, ll t) {
   if (c > t/2)
       return c;
   ll time = 2*c;
   ll pos = c-1;
   while (time + pos + 1 <= t) {
       time += pos + 1;
       pos = time/2;
   }
   pos -= t - time;
   return pos;
}

ll find_cow(ll x, ll t) {
   if (x > t/2) return x;
   if (2*(x+1) == t)
       return x+1;
   
   if ((t - 2*x - 2) % 3 == 0)
       return (t - (t-2*x-2)/3)/2;
   
   ll y = (t - 2*x)/3 + 1;
   t -= y;
   x += y;
   if (x > t/2) x = 0;
   return find_cow(x, t);
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(nullptr); cout.tie(nullptr);
   
   int Q; cin >> Q;
   while (Q--) {
       int type; cin >> type;
       if (type == 1) {
           ll c, t;
           cin >> c >> t;
           cout << find_pos(c, t) << "\n";
       }
       else {
           ll x, t; cin >> x >> t;
           cout << find_cow(x, t) << "\n";
       }
   }
}
