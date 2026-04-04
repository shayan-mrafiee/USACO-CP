#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

// seperate x and y-coords, the y's can be given to any point
// if two points have the same x -> their y's differ by 1
// if two points' x differ by 1 -> they should have the same y
// otherwise -> impossible 
// #x-pairs + #y-pairs = N/2 => #y-pairs = N/2 - #x-pairs 

pair<int, int> range(vector<int> &v) {
    int low = 0; 
    for (int i = 0; i < v.size(); i += 2) {
        low += v[i] != v[i+1];
    }

    int high = 0; 
    map<int, int> ocr; 
    for (int i : v) ocr[i]++; 

    for (auto [x, n] : ocr) {
        if (!ocr.count(x+1)) continue; 

        int val = min(n, ocr[x+1]);
        val -= (n - val) % 2;
        ocr[x+1] -= val; 
        high += val; 
    }

    return make_pair(low, high);
}

string solve() {
    int N; cin >> N;
    vector<int> x(N), y(N);

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    sort(all(x));
    sort(all(y));
    
    for (int i = 0; i < N; i += 2) {
        if (x[i+1] - x[i] >= 2 || y[i+1] - y[i] >= 2) 
            return "NO";
    }

    auto [x_low, x_high] = range(x);
    auto [y_low, y_high] = range(y);
    for (int x_pairs = x_low; x_pairs <= x_high; x_pairs += 2) {
        int y_pairs = N/2 - x_pairs;
        if (y_pairs >= y_low && y_pairs <= y_high && y_pairs % 2 == y_low % 2)
            return "YES";
    }

    return "NO";
}  

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        cout << solve() << "\n"; 
}