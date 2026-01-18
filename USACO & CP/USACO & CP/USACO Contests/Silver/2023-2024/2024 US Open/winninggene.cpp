#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    
    vector<int> ans(N);
    
    for (int L = 1; L <= N; L++) {
        vector<string> substring(N);
        for (int i = 0; i + L <= N; i++) {
            substring[i] = S.substr(i, L);
        }
        for (int i = 0; i + L <= N; i++) {
            
        }
    }
    
    for (int v : ans) cout << v << "\n";
}
