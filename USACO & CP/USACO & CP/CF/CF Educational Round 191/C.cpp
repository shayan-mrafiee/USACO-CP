#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<int, int> ;
#define all(x) x.begin(), x.end()

struct Comp {
	bool operator()(const pii &a, const pii &b) {
		return a.second - a.first < b.second - b.first; 
	}
}; 


void solve() {
    int n, k; cin >> n >> k; 
    string s; cin >> s; 
    vector<bool> ans(n);

    stack<int> st; // indices of only (
    priority_queue<pair<int, int>, vector<pair<int, int>>, Comp> pq; // (beg, end)

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') st.push(i);
        else if (!st.empty()) {
            pq.push(make_pair(st.top(), i));
            st.pop();
        }
    }

    while (k-- && !pq.empty()) {
        int f = pq.top().first, sec = pq.top().second; 
        int i = f; 
        while (i && ans[i-1]) { i--; }
        if (!i || s[i-1] == ')') ans[f] = 1; 
        else {
            i = sec; 
            while (i < n-1 && ans[i+1]) { i++; }
            if (i == n-1 || s[i+1] == '(') ans[sec] = 1; 
        }

        pq.pop(); 
    }

    for (bool b : ans) cout << b; 
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}