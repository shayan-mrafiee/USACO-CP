#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n; 
    double a_total = 0, b_total = 0; 
    priority_queue<double> pq_a, pq_b; 
    for (int i = 0; i < n; i++) {
        double a, b; cin >> a >> b; 
        pq_a.push(a);
        pq_b.push(b);
    }

    double ans = 0; 
    for (int i = 1; i <= 2*n; i++) {
        if (pq_b.empty() || (!pq_a.empty() && a_total < b_total))
            a_total += pq_a.top(), pq_a.pop(); 
        else
            b_total += pq_b.top(), pq_b.pop(); 
        
        ans = max(ans, min(a_total-i, b_total-i));
    }

    printf("%.4f\n", ans); 
}