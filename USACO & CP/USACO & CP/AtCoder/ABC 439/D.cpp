#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N; 
    vector<int> A(N);

    for (int& i : A) cin >> i;

    map<int, ll> ocr;
    ll ans = 0; 
    for (int j = 0; j < N; j++) {
        ocr[A[j]]++;
        if (A[j] % 5)
            continue; 
        ans += ocr[A[j] * 7LL/5] * ocr[A[j] * 3LL/5];
    }

    ocr = {}; 
    for (int j = N-1; j >= 0; j--) {
        ocr[A[j]]++;
        if (A[j] % 5)
            continue; 
        ans += ocr[A[j] * 7LL/5] * ocr[A[j] * 3LL/5];
    }

    cout << ans << "\n";
}