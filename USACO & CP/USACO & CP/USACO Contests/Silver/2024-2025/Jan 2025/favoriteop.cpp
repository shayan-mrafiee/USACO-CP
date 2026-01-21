#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
   ll N, M; cin >> N >> M;
   vector<ll> a(N), prefix(N+1);
   for (int i = 0; i < N; i++) {
       cin >> a[i];
       a[i] %= M;
   }
   sort(all(a));
   
   for (int i = 0; i < N; i++) {
       prefix[i+1] = prefix[i] + a[i];
   }
   
   ll ans = LLONG_MAX;
   for (int i = 0; i < N; i++) {
       ll x = a[i];
       if (i && x == a[i-1]) continue; 
       ll ops = i*x - prefix[i]; // x - ai
       ops += prefix.back() - prefix[i+1] - (N-i-1) * x; // ai - x
       int l = upper_bound(all(a), x - (M+1)/2) - a.begin() - 1;
       int r = lower_bound(all(a), x + (M+1)/2) - a.begin();
       
       if (l >= 0) {
           ops -= 2 * ((l+1)*x - prefix[l+1]);
           ops += (l+1) * M;
       }
       if (r < N) {
           ops -= 2 * (prefix.back() - prefix[r] - (N-r) * x);
           ops += (N-r) * M;
       }
       ans = min(ans, ops);
   }
   cout << ans << "\n";
}

int main() {
   int T; cin >> T;
   while (T--) {
       solve();
   }
}
