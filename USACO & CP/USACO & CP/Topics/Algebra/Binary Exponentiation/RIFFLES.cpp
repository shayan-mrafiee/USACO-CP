#include <bits/stdc++.h>
using namespace std;

vector<int> apply_permutation(vector<int> &seq, vector<int> &perm) {
    vector<int> res(seq.size()); 
    for (int i = 0; i < seq.size(); i++) {
        res[i] = seq[perm[i]]; 
    }
    return res; 
}

void solve() {
    int N, K; cin >> N >> K; 
    vector<int> seq(N), perm; 
    
    for (int i = 0; i < N; i++) {
        seq[i] = i+1; 
        if (i % 2 == 0) perm.push_back(i); 
    }
    for (int i = 1; i <= N; i += 2) {
        perm.push_back(i); 
    }
    
    while (K > 0) {
        if (K & 1) {
            seq = apply_permutation(seq, perm); 
        }
        perm = apply_permutation(perm, perm); 
        K >>= 1; 
    }
    
    for (int i : seq) cout << i << " ";
    cout << "\n"; 
}

int main() {
	int T; cin >> T; 
	while (T--) {
	    solve(); 
	}
}
