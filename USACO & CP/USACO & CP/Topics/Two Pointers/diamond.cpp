#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N, K;
vector<int> diamonds;

int most_diamonds(int begin, int end) {
    int l = 0, r = 0, result = 0;
    while(l <= r && r < N) {
        if (diamonds[r] - diamonds[l] > K) l++;
        else {
            result = max(result, r-l+1);
            r++;
        }
    }
    
    return result;
}

int main() {
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    
    cin >> N >> K;
    diamonds.resize(N);
    
    for (int &i : diamonds) cin >> i;
    sort(diamonds.begin(), diamonds.end());
}
