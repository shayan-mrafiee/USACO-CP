//https://www.spoj.com/problems/MKTHNUM/
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

struct Node {
    int cnt, left, right; 
};

int n; 
vector<Node> st; 
vector<int> roots;
vector<int> vals; 

int new_node(int cnt = 0, int left = -1, int right = -1) {
    Node n = {cnt, left, right};
    st.push_back(n);
    return st.size()-1; 
}

int build(int tl = 0, int tr = n-1) {
    if (tl == tr) return new_node(); 

    int tm = (tl + tr)/2; 
    return new_node(0, build(tl, tm), build(tm+1, tr));
}

int update(int i, int v = roots.back(), int tl = 0, int tr = n-1) {
    if (tl == tr) return new_node(st[v].cnt+1);

    int tm = (tl + tr)/2, left = st[v].left, right = st[v].right; 
    if (i <= tm)
        left = update(i, left, tl, tm); 
    else
        right = update(i, right, tm+1, tr); 

    return new_node(st[left].cnt + st[right].cnt, left, right);
}

int find_kth(int l, int r, int k, int tl = 0, int tr = n-1) {
    if (tl == tr) return tl;

    int tm = (tl + tr)/2, left_cnt = st[st[r].left].cnt - st[st[l].left].cnt;
    if (k <= left_cnt)
        return find_kth(st[l].left, st[r].left, k, tl, tm);

    return find_kth(st[l].right, st[r].right, k - left_cnt, tm+1, tr);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m; cin >> n >> m;
    vector<int> a(n); 
    roots.reserve(n+1);
    for (int &i : a) cin >> i; 

    vals = a; 
    sort(all(vals)); 
    vals.erase(unique(all(vals)), vals.end());
    n = vals.size(); 

    st.reserve(4*n + 4 * n * (log2(n)+1));
    roots.push_back(build());
    for (int i : a) {
        int val = lower_bound(all(vals), i) - vals.begin(); 
        roots.push_back(update(val));
    }

    while(m--) {
        int i, j, k; 
        cin >> i >> j >> k; 
        cout << vals[find_kth(roots[i-1], roots[j], k)] << "\n";
    }
}