//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//struct Cow {
//    string when, yearAnimal, reference;
//};
//
//map<string, Cow> info;
//vector<string> zodiac = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
//
//int birthyear(string cow) {
//    if (cow == "Bessie") return 0;
//    
//    int year = birthyear(info[cow].reference);
//    int dif = find(zodiac.begin(), zodiac.end(), info[cow].yearAnimal) - zodiac.begin() - (find(zodiac.begin(), zodiac.end(), info[info[cow].reference].yearAnimal) - zodiac.begin());
//    dif += (dif < 0) ? 12 : 0;
//    if (info[cow].when == "previous") {
//        year += -12 + dif;
//    }
//    else {
//        dif = (dif == 0) ? 12 : dif;
//        year += dif;
//    }
//    return year;
//}
//
//int main() {
//    info["Bessie"].yearAnimal = "Ox";
//    int N; cin >> N;
//    for (int i = 0; i < N; i++) {
//        string cow, born, in, year, from;
//        cin >> cow >> born >> in >> info[cow].when >> info[cow].yearAnimal >> year >> from >> info[cow].reference;
//    }
//    
//    cout << abs(birthyear("Elsie")) << endl;
//}
