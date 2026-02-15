#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n;
    vector<int> A(n); 

    for (int& i : A)
        cin >> i; 

    sort(all(A));

    if (A[0] != 0) {
        cout << "0\n";
        return; 
    }
    else for (int i = 0; i < n-1; i++) {
        if (A[i] == A[i+1])
            continue; 
        if (A[i]+1 != A[i+1]) {
            cout << A[i]+1 << "\n"; 
            return; 
        }
    }
    cout << A.back()+1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}