#include <bits/stdc++.h>

using namespace std;
#define all(x) x.begin(), x.end()

void solve(vector<int> &A, vector<int> &ans) {
    int N = (int) A.size(),
    need = set<int>(all(A)).size();
    vector<int> ocr(N/2 + 1);

    int best = 2*N, r = -1;
    for (int i = 0; i < N; i++) {
        while (need && r+1 < N) {
            r++; 
            need -= (++ocr[A[r]]) == 1; 
        }

        if (!need) best = min(best, r - 2*i);

        ans[i] = min(ans[i], i + best);
        need += (--ocr[A[i]]) == 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N; 
    vector<int> A(2*N), ans(2*N, N);

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