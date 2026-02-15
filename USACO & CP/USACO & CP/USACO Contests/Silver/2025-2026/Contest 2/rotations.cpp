#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve(vector<int> &A, vector<int> &ans) {
    int N = (int) A.size() / 2; 
    int need = set<int>(A.begin(), A.end()).size();
    vector<int> ocr(N+1);

    // start going to the left, then go to the right
    // cost would be i - l + r - l = i + (r - 2l)
    // store the minimum (r - 2l) for each i
    int best = INT32_MAX; // stores minimum (r - 2l)
    int r = -1; 
    for (int i = 0; i < 2*N; i++) {
        while (need && r+1 < 2*N) {
            r++;
            need -= (++ocr[A[r]]) == 1; 
        }

        if (!need) best = min(best, r - 2*i); // set l to i and check 

        ans[i] = min(ans[i], i + best); // here i is the index, not l

        ocr[A[i]]--; 
        need += ocr[A[i]] == 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N; 
    vector<int> A(2*N), ans(2*N, INT32_MAX);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A[i+N] = A[i];
    }

    for (int i = 0; i < 2; i++) {
        solve(A, ans);
        reverse(all(A));
        reverse(all(ans));
    }

    for (int i = 0; i < N; i++) {
        cout << min(ans[i], ans[i+N]) << " \n"[i == N-1]; 
    }
}