#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()

struct Patch {
    int p, t, d;
    
    bool operator<(const Patch &other) const {
        return p < other.p;
    }
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
    
    int K, M, N; cin >> K >> M >> N;
    vector<Patch> patches(K);
    vector<int> cows(M);
    
    for (auto &[p, t, _] : patches) cin >> p >> t;
    for (int &f : cows) cin >> f;
    
    sort(all(cows));
    
    for (Patch &patch : patches) {
        int i = lower_bound(all(cows), patch.p) - cows.begin(),
        d1 = 1e9, d2 = 1e9;
        
        if (i < M) d2 = patch.p - cows[i];
        if (i) d1 = patch.p - cows[i-1];
        
        patch.d = (abs(d1) < abs(d2)) ? d1 : d2;
    }
    
    sort(all(patches));
    
    vector<ll> v;
    ll tastiness = 0;
    double pos = patches[0].p + patches[0].d - patches[0].d/abs(patches[0].d) * 0.5;
    for (int i = 0; i < K; i++) {
        if (patches[i].d == 0) continue;
        if (abs(pos - patches[i].p) >= abs(patches[i].d)) {
            v.push_back(tastiness);
            tastiness = 0;
            pos = patches[i].p + patches[i].d - patches[i].d/abs(patches[i].d) * 0.5;
        }
        
        tastiness += patches[i].t;
    }
    
    v.push_back(tastiness); 
    sort(v.rbegin(), v.rend());
    
    cout << accumulate(v.begin(), v.begin() + N, 0LL) << "\n";
}
