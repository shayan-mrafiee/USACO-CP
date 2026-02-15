#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N; 
    vector<int> A(3*N);
    vector<vector<int>> indicies(N+1);
    set<int> S1, S2; 

    for (int i = N; i < 2*N; i++) {
        cin >> A[i];
        A[i-N] = A[i+N] = A[i];
        indicies[A[i]].push_back(i);
        S1.insert(A[i]);
        S2.insert(A[i]);
    }

    vector<int> ans(N);
    priority_queue<int, vector<int>, greater<int>> pq1; 
    for (int i = N, l = N, r = N; i < 2*N; i++) {
        S1.erase(A[i]);
        while (!S1.empty() && l) {
            l--; 
            if (S1.count(A[l])) {
                pq1.push(l);
                S1.erase(A[l]);
            }
        }

        r = max(r, i);
        int cur_ans = 2*(r - i) + i - l;

        int top = pq1.top(); pq1.pop(); 
        int new_l = pq1.top(); 
        int new_r = *lower_bound(all(indicies[A[top]]), i);
        while (!pq1.empty() && 2 * max(new_r - i, r - i) + i - new_l < cur_ans) {
            r = max(r, new_r);
            l = new_l;
            cur_ans = 2*(r - i) + i - l;
            top = pq1.top(); pq1.pop(); 
            new_l = pq1.top(); 
            new_r = *lower_bound(all(indicies[A[top]]), i);
        }
        pq1.push(top);

        ans[i - N] = cur_ans;
    }
    // do the same logic as the loop above, but reverse it (backward loop, have pq store r's not l's)
    priority_queue<int> pq2; 
    for (int i = 2*N-1, l = 2*N-1, r = 2*N-1; i >= N; i--) {
        S2.erase(A[i]);
        while (!S2.empty() && r < 3*N-1) {
            r++; 
            if (S2.count(A[r])) {
                pq2.push(r);
                S2.erase(A[r]);
            }
        }

        l = min(l, i);
        int cur_ans = 2*(i - l) + r - i;

        int top = pq2.top(); pq2.pop(); 
        int new_r = pq2.top(); 
        int new_l = *(upper_bound(all(indicies[A[top]]), i) - 1);
        while (!pq2.empty() && 2 * max(i - new_l, i - l) + new_r - i < cur_ans) {
            l = min(l, new_l);
            r = new_r;
            cur_ans = 2*(i - l) + r - i;
            top = pq2.top(); pq2.pop(); 
            new_r = pq2.top(); 
            new_l = *(upper_bound(all(indicies[A[top]]), i) - 1);
        }
        pq2.push(top);

        ans[i - N] = min(cur_ans, ans[i - N]);
    }

    for (int j : ans) cout << j << "\n";
}