#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using Matrix = vector<vector<int>>; 
#define all(x) x.begin(), x.end()
#define Matrix(x) vector<vector<int>>((x), vector<int>((x))); 

struct Row {
    string L; 
    Matrix matrix; 
};

const int MOD = 1e9 + 7; 
vector<Row> s1; 
vector<Row> s2; 
Matrix identity_mat; 
int N; 

void add(string &L) {
    Row r; 
    r.L = L; 
    Matrix &res = r.matrix; 
    res = Matrix(N);

    if (s1.empty()) {
        res = identity_mat; 
    }
    else {
        string &prev = s1.back().L; 
        Matrix &p = s1.back().matrix; 
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                for (int k = j-1; k <= j+1; k++) {
                    if (k >= 0 && k < N && prev[k] == L[j]) {
                        res[i][j] = (res[i][j] + p[i][k]) % MOD; 
                    }
                }
            }
        }
    }

    s1.push_back(r);
}

void remove() {
    if (s2.empty()) {
        while (s1.size() > 1) {
            Row r = s1.back(); s1.pop_back();
            Matrix &res = r.matrix; 
            string &L = r.L;
            res = Matrix(N); 

            if (s2.empty()) {
                res = identity_mat; 
            }
            else {
                string &prev = s2.back().L;
                Matrix &p = s2.back().matrix; 
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N; j++) {
                        for (int k = i-1; k <= i+1; k++) {
                            if (k >= 0 && k < N && L[i] == prev[k]) {
                                res[i][j] = (res[i][j] + p[k][j]) % MOD;
                            }
                        }
                    }
                }
            } 
            s2.push_back(r); 
        }
        if (!s1.empty()) s1.pop_back(); 
    }
    else {
        s2.pop_back(); 
    }
}

int path(int c, int d) {
    if (s1.empty()) return s2.back().matrix[c][d]; 
    if (s2.empty()) return s1.back().matrix[c][d];

    int res = 0; 
    Matrix &a = s1.back().matrix; 
    Matrix &b = s2.back().matrix; 
    vector<int> temp(N);

    // transition
    string &prev = s2.front().L, &cur = s1.front().L; 
    for (int j = 0; j < N; j++) {
        for (int k = j-1; k <= j+1; k++) {
            if (k >= 0 && k < N && prev[k] == cur[j]) {
                temp[j] = (temp[j] + b[c][k]) % MOD; 
            }
        }
    }

    for (int k = 0; k < N; k++) {
        res += (1LL * temp[k] * a[k][d]) % MOD; 
        res %= MOD; 
    }

    return res; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q; cin >> N >> Q; 
    identity_mat = Matrix(N); 

    for (int i = 0; i < N; i++) 
        identity_mat[i][i] = 1; 
    
    while (Q--) {
        string type; cin >> type; 
        if (type == "add") {
            string L; cin >> L; 
            add(L); 
        }
        else if (type == "remove") {
            remove(); 
        }
        else {
            int c, d; cin >> c >> d; 
            cout << path(c-1, d-1) << "\n"; 
        }
    }
}