#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    
    vector<int> p(n); string s;
    for (int &i : p) cin >> i;
    cin >> s;
    
    vector<pair<int, int>> pair_LR (n+1, {0,0}), pair_RL (n+1, {0, 0});
    for (int i = 1; i < n-1; i++) {
        if (p[i] > i+1) {
            pair_LR[i].first += i; pair_LR[p[i]-1].first -= i;
            pair_LR[i].second += p[i]-2; pair_LR[p[i]-1].second -= p[i]-2;
        }
        
        else if (p[i] < i+1) {
            pair_RL[i+1].second += i; pair_RL[p[i]].second -= i;
            pair_RL[i+1].first += p[i]; pair_RL[p[i]].first -= p[i];
        }
    }
    
    for (int i = 1; i < n; i++) {
        pair_LR[i].first += pair_LR[i-1].first;
        pair_LR[i].second += pair_LR[i-1].second;
    }
    for (int i = n-1; i >= 1; i--) {
        pair_RL[i].first += pair_RL[i+1].first;
        pair_RL[i].second += pair_RL[i+1].second;
    }
    
    vector<int> pref_LR (n), pref_RL (n);
    for (int i = 1; i < n; i++) {
        pref_LR[i] = pref_LR[i-1] + (s[i-1] == 'L' && s[i] == 'R');
        pref_RL[i] = pref_RL[i-1] + (s[i] == 'L' && s[i-1] == 'R');
    }
    
    
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
        solve();
}
