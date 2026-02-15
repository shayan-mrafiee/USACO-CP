#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int f(int N) {
    int res = 0;
    while (N)
    {
        res += (N % 10) * (N % 10);
        N /= 10; 
    }
    
    return res; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N; 
    set<int> visited {N};
    while (N > 1)
    {
        N = f(N); 
        if (visited.count(N)) {
            cout << "No\n";
            return 0; 
        }
        visited.insert(N);
    }
    
    cout << (N == 1 ? "Yes\n" : "No\n");
}