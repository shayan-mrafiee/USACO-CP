#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> test(string s) {
    vector<int> v;
    int n = count(s.begin(), s.end(), 'F');
    //if (n == 0) return {};
    if (s[0] == *(s.end()-1)) {
        //cout << "first condition met\n";
        int start = (n+1)%2;
        for (int i = start; i <= n + 1; i += 2) {
            v.push_back(i);
        }
    }
    
    else if ((s[0] == 'B' && *(s.end()-1) == 'E') || (s[0] == 'E' && *(s.end()-1) == 'B')) {
        //cout << "second condition met\n";
        int start = n % 2;
        for (int i = start; i <= n; i += 2) {
            v.push_back(i);
        }
    }
    
    else {
        //cout << "last condition met\n";
        for (int i = 0; i <= n; i++) v.push_back(i);
    }
    
    return v;
}

int main() {
    int N; string S;
    cin >> N >> S;
    if (count(S.begin(), S.end(), 'F') == N) {
        cout << N << endl; 
        for (int i = 0; i < N; i++)
            cout << i << endl;
        return 0;
    }
    vector<int> possibilities;
    string s = "";
    bool checked = false;
    for (char c : S) {
        checked = false;
        if (c == 'F') s.push_back(c);
        else if (*(s.end()-1) == 'F') s.push_back(c);
        else if (*(s.end()-1) == c) {
            if (possibilities.empty()) possibilities = {1};
            else
                for (int &i : possibilities) i++;
            s = c;
            checked = true;
        }
        else {
            s = c;
            checked = true;
        }
        if (s.find('F') != string::npos && *(s.end()-1) != 'F') {
            //cout << "testing " << s << endl;
            checked = true;
            vector<int> v = test(s);
            if (possibilities.empty()) possibilities = v;
            else {
                int start = possibilities[0] + v[0], end = possibilities[possibilities.size()-1] + v[v.size()-1], dif = (end - start == 1) ? 1 : 2;
//                cout << "start = " << start << endl;
//                cout << "end = " << end << endl;
                possibilities = {};
                for (int i = start; i <= end; i += dif)
                    possibilities.push_back(i);
            }
        }
    }
    
    if (!checked) {
        //cout << "testing " << s << endl;
        vector<int> v = test(s);
        if (possibilities.empty()) possibilities = v;
        else {
            int start = possibilities[0] + v[0], end = possibilities[possibilities.size()-1] + v[v.size()-1], dif = (end - start == 1) ? 1 : 2;
//            cout << "start = " << start << endl;
//            cout << "end = " << end << endl;
            possibilities = {};
            for (int i = start; i <= end; i += dif)
                possibilities.push_back(i);
        }
    }
    
    cout << possibilities.size() << endl;
    for (int i : possibilities) cout << i << endl;
    
}
