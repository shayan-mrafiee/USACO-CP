#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()

void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for (int& i : a)
       cin >> i;
   
   vector<int> sorted = a;
   sort(all(sorted));
   
   auto ok = [&](bool b) {
       vector<bool> v(n);
       for (int i : sorted) {
           v[find(all(a), i) - a.begin()] = b;
           b = !b;
       }
       
       for (int i = 0; i < n-1; i++) {
           if (v[i] == v[i+1])
               return false;
       }
       
       return true;
   };
   
   if (ok(false) || ok(true)) {
       cout << "YES\n";
   }
   else {
       cout << "NO\n";
   }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
   
   int t; cin >> t;
   while(t--)
       solve();
}
