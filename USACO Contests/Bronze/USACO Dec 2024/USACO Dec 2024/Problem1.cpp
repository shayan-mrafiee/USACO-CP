#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> v1 = {0, 0, 5, 60, 615, 6170, 61725, 617280, 6172835, 61728390};
vector<int> v2 = {0, 0, 45, 445, 4445, 44445, 444445, 4444445, 44444445, 444444445};
vector<int> v3 = {0, 0, 49, 499, 4999, 49999, 499999, 4999999, 49999999, 499999999};

void solve() {
    int N; cin >> N;
    int i = ceil(log10(N));
    if (i < 1) {
        cout << 0 << endl;
        return;
    }
    if (N < v2[i]) {
        i--;
        cout << v1[i] << endl;
        return;
    }
    cout << v1[i] + min(N, v3[i]) - v3[i] << endl;
}

int main() {
    
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        solve();
    }
}
