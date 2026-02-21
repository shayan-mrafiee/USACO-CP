#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K; cin >> N >> K; 
    vector<int> c(N);

    for (int &i : c) cin >> i; 

    map<int, int> ocr; 
    int cur_variety = 0; 
    for (int i = 0; i < K; i++) {
        if (!ocr[c[i]]) cur_variety++; 
        ocr[c[i]]++; 
    }

    int max_variety = cur_variety; 
    int l = 0, r = K-1; 
    while (r < N) {
        if (--ocr[c[l]] == 0) cur_variety--; 
        l++; 
        r++; 
        if (r < N) {
            if (ocr[c[r]] == 0)
                cur_variety++; 
            ocr[c[r]]++; 
        }

        max_variety = max(max_variety, cur_variety);
    }

    cout << max_variety << "\n";
}