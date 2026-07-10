#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

vector<int> bit; 
int N; 

void update(int i) {
    while (i <= N) {
        bit[i]++; 
        i |= i+1; 
    }
}

ll get_sum(int i) {
    ll res = 0; 
    while (i >= 0) {
        res += bit[i]; 
        i = (i & (i+1))-1; 
    }
    return res; 
}

ll get_sum(int l, int r) {
    ll res = get_sum(r) - get_sum(l);
    update(l); 
    return res; 
}

int main() {
    freopen("haircut.in", "r", stdin);
    freopen("haircut.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    vector<ll> bigger_than(N+1); 
    bit.resize(N+1); 

    for (int i = 0; i < N; i++) {
        int A; cin >> A; 
        bigger_than[A] += get_sum(A, N); 
    }

    ll ans = 0; 
    for (int j = 0; j < N; j++) {
        cout << ans << "\n"; 
        ans += bigger_than[j]; 
    }
}