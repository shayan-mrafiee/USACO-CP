#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n; 
    vector<int> a(n);

    for (int &i : a) cin >> i; 

    sort(a.begin(), a.end());

    int ans = 0; 
    for (int i : a) {
        ans += (i >= ans+1);
    }

    cout << ans << "\n";
}