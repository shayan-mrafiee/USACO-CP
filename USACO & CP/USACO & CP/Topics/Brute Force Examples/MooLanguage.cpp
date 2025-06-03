//#include <bits/stdc++.h>
//
//using namespace std;
//
//vector<string> nouns, trans_verbs, intrans_verbs, conjuctions;
//
//struct Sentence {
//    int words, noun_indx, tverb_indx, inverb_indx, conj_indx, commas, periods;
//    
//    string sentence;
//    
//    bool link = true;
//};
//
//void solve(int N, int C, int P) {
//    queue<Sentence> q;
//    q.push({0,0,0,0,0, C, P, ""});
//    
//    while(q.size()) {
//        Sentence s1 = q.back();
//        s1.sentence.append(nouns[s1.noun_indx]); s1.sentence.push_back(' ');
//        s1.sentence.append(intrans_verbs[s1.inverb_indx]);
//        
//        type2:
//        Sentence s2 = q.back();
//    }
//}
//
//int main() {
//    int T; cin >> T;
//    while(T--) {
//        int N, C, P;
//        cin >> N >> C >> P;
//        string text = "";
//        for (int i = 0; i < N; i++) {
//            string word, s;
//            cin >> word >> s;
//            if (s == "noun") nouns.push_back(word);
//            else if (s == "transitive-verb") trans_verbs.push_back(word);
//            else if (s == "intransitive-verb") intrans_verbs.push_back(word);
//            else conjuctions.push_back(word);
//        }
//    }
//}
