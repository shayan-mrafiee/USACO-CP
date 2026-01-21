#include <bits/stdc++.h>

using namespace std;

int main() {
   int N; cin >> N;
   string S; cin >> S;
   vector<int> ans(N);
   vector<vector<int>> lcp(N+1, vector<int>(N+1)),
   P(N+1, vector<int>(N+2));
   
   for (int i = N-1; i >= 0; i--) {
       for (int j = N-1; j >= 0; j--) {
           if (S[i] == S[j])
               lcp[i][j] = 1 + lcp[i+1][j+1];
       }
   }
   
   auto compare = [&](int i, int j, int L) {
       int k = lcp[i][j];
       if (k >= L) return 0;
       return S[i+k] > S[j+k] ? 1 : -1;
   };
   
   for (int L = 1; L <= N; L++) {
       int sz = N - L + 1;
       vector<int> left(sz), right(sz);
       stack<int> st;
       for (int i = 0; i < sz; i++) {
           while (!st.empty() && compare(st.top(), i, L) > 0) {
               st.pop();
           }
           left[i] = st.empty() ? i : i - st.top() - 1;
           st.push(i);
       }
       
       st = {};
       for (int i = sz-1; i >= 0; i--) {
           while (!st.empty() && compare(st.top(), i, L) >= 0) {
               st.pop();
           }
           right[i] = st.empty() ? sz-i-1 : st.top() - i - 1;
           st.push(i);
       }
       for (int i = 0; i + L <= N; i++) {
           int maxW = left[i] + right[i] + 1,
           maxK =  maxW + L - 1;
           P[L][L]++;
           if (maxK + 1 <= N) P[L][maxK+1]--;
       }
   }
   
   for (int L = 1; L <= N; L++) {
       for (int K = L; K <= N; K++) {
           P[L][K] += P[L][K-1];
           ans[P[L][K]-1]++; 
       }
   }
   
   for (int v : ans) cout << v << "\n";
}
