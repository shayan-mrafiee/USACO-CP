#include <iostream>
#include <vector>
#include <list>

using namespace std;

void sort(vector<int> &v) {
    list<int> sorted = {};
    
    auto append = [&](int element) {
        
        if (sorted.empty()) {
            sorted.push_back(element); return;
        }
        
        if (element >= sorted.back()) {
            sorted.push_back(element);
            return;
        }
        if (element <= sorted.front()) {
            sorted.push_front(element);
            return;
        }
        
        auto l = sorted.begin(), r = sorted.end();
        
        int li = 0, ri = sorted.size();
        
        while(li < ri) {
            auto i = l; advance(i, (ri - li)/2);
            int ii = li + (ri - li)/2;
            if (element == *i) {
                l = i; break;
            }
            
            if (element > *i) {
                l = i; l++;
                li = ii+1;
            }
            
            else {
                r = i;
                ri = ii;
            }
        }
        sorted.insert(l, element);
    };
    
    for (int t : v) {
        append(t);
    }
    v = {};
    for (int t : sorted) v.push_back(t);
}

int main() {
    vector<int> v = {6,6,77,4,3,33,34, {},45,56,667,6,45,3223,4,5667,8,8895,32};
    sort(v);
    
    for (int i : v) cout << i << ' ';
    cout << "\n";
}
