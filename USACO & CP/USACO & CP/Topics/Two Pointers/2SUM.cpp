//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int N, x; cin >> N >> x;
//    vector<int> arr (N);
//    for (int &i : arr)
//        cin >> i;
//    
//    sort(arr.begin(), arr.end());
//    
//    int i1 = 0, i2 = N-1;
//    
//    while (i1 < i2) {
//        if (arr[i1] + arr[i2] == x) {
//            cout << i1 << ' ' << i2 << endl;
//            return 0;
//        }
//        if (arr[i1] + arr[i2] < x) i1++;
//        else i2--;
//    }
//    
//    cout << -1 << endl; 
//}
