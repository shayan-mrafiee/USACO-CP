#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    int N, M; cin >> N >> M;
    string s; cin >> s;
    vector<ll> a (N);
    ll milk = 0;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        milk += a[i];
    }
    vector<bool> bad_L (N, false), bad_R (N, false);
    for (int i = 0; i < N; i++) {
        if (s[i] == 'R' && s[(i + 1) % N] == 'L') {
            bad_L[i] = bad_R[(i + 1) % N] = true;
        }
    }
    
    for (int i = 0; i < N; i++) {
        ll waste = 0;
        if (bad_L[i]) {
            int j = (i - 1 + N) % N;
            while (s[j] == 'R') {
                waste += a[j--];
                if (j < 0) j += N;
            }
        }
        
        if (bad_R[i]) {
            int j = (i + 1) % N;
            while (s[j] == 'L') {
                waste += a[j++];
                if (j >= N) j -= N;
            }
        }
        milk -= min(waste, (ll) M);
    }
    
    cout << milk << endl;
    
}
