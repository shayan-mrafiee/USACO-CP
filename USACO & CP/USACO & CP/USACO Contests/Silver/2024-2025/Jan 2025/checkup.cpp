#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
   int N; cin >> N;
   vector<int> a(N), b(N);
   
   for (int &i : a) cin >> i;
   for (int &i : b) cin >> i;
   
   map<int, vector<ll>> mp, prefix;
   for (int i = 0; i < N; i++) {
       mp[b[i]].push_back(min(i, N-i-1));
   }
   for (auto &[n, v] : mp) {
       sort(all(v));
       prefix[n] = v;
       for (int i = 1; i < prefix[n].size(); i++) {
           prefix[n][i] += prefix[n][i-1];
       }
   }
   
   ll ans = 0;
   for (int i = 0; i < N; i++) {
       ans += mp[a[i]].size();
       int j = upper_bound(all(mp[a[i]]), min(i, N-i-1)) - mp[a[i]].begin() - 1;
       if (j >= 0) ans += prefix[a[i]][j];
       ans += (mp[a[i]].size() - j - 1) * min(i, N-i-1);
       if (a[i] == b[i]) {
           ans += 1LL * i * (i+1) / 2;
           ans += 1LL * (N-i-1) * (N-i) / 2;
       }
   }
   
   cout << ans << "\n";
}
