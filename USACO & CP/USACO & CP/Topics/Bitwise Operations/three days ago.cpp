#include <bits/stdc++.h>

using namespace std;

int main() {
    string S; cin >> S;
    int N = S.size();
    map<int, int> occurence;
    occurence[0] = 1;
    long long ans = 0;
    int cur = 0;
   
    for (int i = 0; i < N; i++) {
        cur ^= 1 << (S[i] - '0');
        ans += occurence[cur]++;
    }
   
    cout << ans << "\n";
}
