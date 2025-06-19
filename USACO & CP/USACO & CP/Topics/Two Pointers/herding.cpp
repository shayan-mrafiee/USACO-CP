//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    freopen("herding.in", "r", stdin);
//    freopen("herding.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<int> cows(N);
//    for (int &cow : cows) cin >> cow;
//    
//    sort(cows.begin(), cows.end());
//    
//    int l = 0, r = 0, minimum = N;
//    while(r < N) {
//        if (cows[r] - cows[l] + 1 < N) r++;
//        else {
//            int indx = lower_bound(cows.begin(), cows.end(), cows[l]+N-1) - cows.begin();
//            indx -= (cows[indx] > cows[l] + N - 1);
//            if (indx < N-1 && N-(indx-l+1) == 1 && cows[indx+1]-cows[indx] > 1) indx--; 
//            minimum = min(minimum, N-(indx-l+1));
//            l++;
//        }
//    }
//    
//    int maximum = 0;
//    for (int i = 2; i < N-1; i++) {
//        maximum += cows[i] - cows[i-1] - 1;
//    }
//    maximum += max(cows[N-1] - cows[N-2], cows[1] - cows[0]) - 1;
//    
//    cout << minimum << "\n" << maximum << "\n";
//}
