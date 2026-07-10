#include <bits/stdc++.h>
using namespace std; 
using ll = long long;

int main() {
    freopen("input.txt", "w", stdout);

    cout << "17117 10\n";
    for (int i = 17117; i >= 1; i--) {
        cout << i << "\n";
    }

    struct SegmentTree {
        int N; 
        vector<int> st; 
        
        SegmentTree(int N) : N(N) {
            st = vector<int>(4*N); 
        }
        
        SegmentTree(const vector<int> &a) : N((int) a.size()) {
            st = vector<int>(4*N);
            build(a, 0, 0, N-1); 
        }
        
        void build(const vector<int> &a, int v, int tl, int tr) {
            if (tl == tr) {
                st[v] = a[tl]; 
            }
            else {
                int tm = (tl + tr) / 2; 
                build(a, 2*v+1, tl, tm); 
                build(a, 2*v+2, tm+1, tr); 
                st[v] = st[2*v+1] + st[2*v+2]; 
            }
        }
        
        void update(int i, int val, int v, int tl, int tr) {
            if (tl == tr) {
                st[v] = val; 
                return; 
            }
            
            int tm = (tl + tr) / 2; 
            if (i <= tm)
                update(i, val, 2*v+1, tl, tm); 
            else
                update(i, val, 2*v+2, tm+1, tr); 
            
            st[v] = st[2*v+1] + st[2*v+2]; 
        }
        
        void update(int i, int val) {
            update(i, val, 0, 0, N-1); 
        }
        
        int get_sum(int l, int r, int v, int tl, int tr) {
            if (l > tr || r < tl) return 0; 
            if (l <= tl && r >= tr) return st[v]; 
            
            int tm = (tl + tr) / 2; 
            return get_sum(l, r, 2*v+1, tl, tm) + get_sum(l, r, 2*v+2, tm+1, tr); 
        }
        
        int get_sum(int l, int r) {
            return get_sum(l, r, 0, 0, N-1); 
        }
    };
}