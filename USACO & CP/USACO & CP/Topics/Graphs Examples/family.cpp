//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//    freopen("family.in", "r", stdin);
//    freopen("family.out", "w", stdout);
//    
//    int N; string cow1, cow2;
//    cin >> N >> cow1 >> cow2;
//    vector<string> relationship;
//    map<string, vector<string>> children;
//    map<string, string> mother;
//    bool related = false;
//    for (int i = 0; i < N; i++) {
//        string X, Y; cin >> X >> Y;
//        children[X].push_back(Y);
//        mother[Y] = X;
//    }
//    
//    if (mother[cow1] == mother[cow2]) {
//        cout << "SIBLINGS\n";
//        return 0;
//    }
//    
//    if (mother[cow1] == cow2) {
//        cout << cow2 << " is the mother of " << cow1 << endl;
//        return 0;
//    }
//    
//    if (mother[cow2] == cow1) {
//        cout << cow1 << " is the mother of " << cow2 << endl;
//        return 0;
//    }
//    
//    string child = cow1;
//    string parent = mother[cow1];
//    for (int r = 0; ; r++) {
//        if (parent == cow2) {
//            relationship.push_back("grand-mother");
//            related = true;
//            break;
//        }
//        
//        if (count(children[parent].begin(), children[parent].end(), cow2)) {
//            relationship.push_back("aunt");
//            related = true;
//            break;
//        }
//        
//        if (mother.find(parent) == mother.end()) break;
//        
//        relationship.push_back("great-");
//        child = parent;
//        parent = mother[parent];
//    }
//    
//    if (related) {
//        if (relationship[0] == "great-") relationship.erase(relationship.begin());
//        cout << cow2 << " is the ";
//        for (string s : relationship) {
//            cout << s;
//        }
//        cout << " of " << cow1 << endl;
//        return 0;
//    }
//    
//    child = cow2;
//    parent = mother[cow2];
//    for (int r = 0; ; r++) {
//        if (parent == cow1) {
//            relationship.push_back("grand-mother");
//            related = true;
//            break;
//        }
//        
//        if (count(children[parent].begin(), children[parent].end(), cow1)) {
//            relationship.push_back("aunt");
//            related = true;
//            break;
//        }
//        
//        if (mother.find(parent) == mother.end()) break;
//        
//        relationship.push_back("great-");
//        child = parent;
//        parent = mother[parent];
//    }
//    
//    if (related) {
//        if (relationship[0] == "great-") relationship.erase(relationship.begin());
//        cout << cow1 << " is the ";
//        for (string s : relationship) {
//            cout << s;
//        }
//        cout << " of " << cow2 << endl; 
//        return 0;
//    }
//    
//    string ancestor1, ancestor2;
//    parent = mother[cow1];
//    while (mother.find(parent) != mother.end()) parent = mother[parent];
//    ancestor1 = parent;
//    parent = mother[cow2];
//    while (mother.find(parent) != mother.end()) parent = mother[parent];
//    ancestor2 = parent;
//    
//    if (ancestor1 == ancestor2) cout << "COUSINS\n";
//    else cout << "NOT RELATED\n"; 
//}
