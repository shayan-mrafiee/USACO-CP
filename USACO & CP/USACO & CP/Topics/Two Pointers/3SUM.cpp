#include <bits/stdc++.h>

using namespace std;
using unt = unsigned int; 

int main() {
    int n, x; cin >> n >> x; 
    vector<unt> arr(n), original(n); 
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
        original[i] = arr[i]; 
    }
    
    sort(arr.begin(), arr.end()); 
    
    unt sum = 0; 
    
    int l = 0, r = n-1; 
    while(r > l) {
        if (sum >= x) {
            sum = sum - arr[r] + arr[r-1]; 
            r--; 
        }
        else {
            sum = arr[l] + arr[r]; 
            unt search = x - sum; 
            int indx = upper_bound(arr.begin(), arr.end(), search) - arr.begin(); 
            if (indx < r) {
                cout << 
                find(original.begin(), original.end(), arr[l]) - original.begin() << " " <<
                find(original.begin(), original.end(), search) - original.begin() << ' ' <<
                find(original.begin(), original.end(), arr[r]) - original.begin() << "\n"; 
                return 0; 
            }
            r--; 
        }
    }
    
    cout << "IMPOSSIBLE\n"; 
}