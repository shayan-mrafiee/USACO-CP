#include <iostream>
#include <cstdio>

using namespace std;

int solve(int X, int K) {
    int u, d, t;
    u = d = t = 0;
    for (int speed = 1; ; speed++) {
        t++;
        u += speed;
        if (u + d >= K) return t;
        
        if (speed >= X) {
            d += speed;
            t++;
            if (u + d >= K) return t;
        }
    }
}

int main() {
    freopen("race.in", "r", stdin);
    freopen("race.out", "w", stdout);

    int K, N; cin >> K >> N;
    for (int i = 0; i < N; i++) {
        int X; cin >> X;
        cout << solve(X,K) << endl;
    }
}
