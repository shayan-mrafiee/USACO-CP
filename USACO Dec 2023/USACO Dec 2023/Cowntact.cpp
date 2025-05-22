#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N; string status;
    cin >> N >> status;
    int days = N, n = 0;
    int starters = 0;
    int begin = 0, end = 0;
    vector<int> middle;
    for (int i = 0; i < N; i++) {
        if (status[i] == '1') n++;
        else if (n > 0) {
            if (n == i+1) {
                days = min(days, n-1);
                begin = n;
            }
            else {
                days = min(days, (n-1)/2);
                middle.push_back(n);
            }
            n = 0;
        }
    }
    if (n > 0) {
        days = min(days, n-1);
        end = n;
    }
    for (int i : middle) {
        starters += (i + (i+1)%2)/(days+1);
    }
    starters += begin/(days+1) + end/(days+1);
    cout << starters << endl;
}
