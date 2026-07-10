#include <bits/stdc++.h>

using namespace std; 
using ll = long long;
#define all(x) x.begin(), x.end()

int& get(vector<int> &v, int i) {
    int n = v.size(); 
    i = (i % n + n) % n; 
    return v[i];
}

void solve() {
    int n; cin >> n; 
    vector<int> h(n);
    
    for (int &i : h) cin >> i; 

    for (int j = 0; j < n; j++) {
        vector<int> w(n);
        for (int i = j; i < j + n-1; i++) {
            if (get(w, i) <= get(h, i)) {
                get(w, i+1) = get(h, i);
            }
            else {
                get(w, i+1) = get(w, i);
            }
        }
        
        for (int i = j; i >= j-n+1; i--) {
            if (max(get(w, i), get(w, i+1)) > get(h, i) && get(w, i) != get(w, i+1)) {
                get(w, i) = max(get(w, i+1), get(h, i));
            }
        }

        cout << accumulate(all(w), 0LL) << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}