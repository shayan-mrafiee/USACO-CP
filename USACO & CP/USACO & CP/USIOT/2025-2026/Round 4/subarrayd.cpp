#include <bits/stdc++.h>

using namespace std; 
using ll = long long; 
#define all(x) x.rbegin(), x.rend()

int main() {
    int N, K; cin >> N >> K; 
    vector<int> V(N);

    for (int &i : V) cin >> i; 

    // if (K == 0 || K == 1) {
    //     ll cur_sum = 0, mn = 0, max_sum = INT32_MIN; 
    //     for (int i : V) {
    //         cur_sum += i; 
    //         max_sum = max(max_sum, cur_sum - mn); 
    //         mn = min(mn, cur_sum);
    //     }

    //     cout << max_sum - K << "\n"; 
    // }
    ll cur_sum = 0, mn = 0, best = INT32_MIN; 
    vector<ll> sums; 
    for (int i : V) {
        cur_sum += i;
        best = max(best, cur_sum);
        if (cur_sum < mn) {
            sums.push_back(best);
            mn = cur_sum;
            best = INT32_MIN; 
        }
    }
    sums.push_back(cur_sum - mn);

    sort(all(sums)); // sort in reverse 

    for (ll &sum : sums) {
        ll mn = min(sum, (ll) K);
        K -= mn;
        sum -= mn; 
        if (!K) break; 
    }
    
    if (K) cout << (int) floor(-K/sums.size()) << "\n"; 

    else cout << *max_element(all(sums)) << "\n";
}