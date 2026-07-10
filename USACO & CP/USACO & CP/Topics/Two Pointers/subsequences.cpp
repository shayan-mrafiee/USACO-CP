//https://codeforces.com/edu/course/3/lesson/18/2/practice/contest/619577/problem/B
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n; 
    vector<int> a(n), b(n); 

    for (int &i : a) cin >> i; 
    for (int &i : b) cin >> i; 

    // min_q.front() = min(b), max_q.front() = max(a)
    deque<int> min_q1, max_q1, min_q2, max_q2; 
    // l1 is first when max(A) >= min(B), l2 when max(A) > min(B)
    int l1 = 0, l2 = 0; 
    ll ans = 0; 
    for (int r = 0; r < n; r++) {
        while (!max_q1.empty() && a[max_q1.back()] <= a[r]) max_q1.pop_back();
        while (!min_q1.empty() && b[min_q1.back()] >= b[r]) min_q1.pop_back();
        max_q1.push_back(r); min_q1.push_back(r); 

        while (!max_q2.empty() && a[max_q2.back()] <= a[r]) max_q2.pop_back();
        while (!min_q2.empty() && b[min_q2.back()] >= b[r]) min_q2.pop_back();
        max_q2.push_back(r); min_q2.push_back(r); 

        while (l1 <= r) {
            int mx = a[max_q1.front()], mn = b[min_q1.front()]; 
            if (mx > mn) {
                l1++; 
                while (!max_q1.empty() && max_q1.front() < l1) max_q1.pop_front(); 
                while (!min_q1.empty() && min_q1.front() < l1) min_q1.pop_front(); 
            }
            else break; 
        }
        while (l2 <= r) {
            int mx = a[max_q2.front()], mn = b[min_q2.front()]; 
            if (mx >= mn) {
                l2++; 
                while (!max_q2.empty() && max_q2.front() < l2) max_q2.pop_front(); 
                while (!min_q2.empty() && min_q2.front() < l2) min_q2.pop_front(); 
            }
            else break; 
        }

        ans += l2 - l1; 
    }

    cout << ans << "\n"; 
}