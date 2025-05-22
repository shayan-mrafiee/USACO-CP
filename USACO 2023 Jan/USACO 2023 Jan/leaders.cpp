#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N; string breed;
    cin >> N >> breed;
    vector<int> E (N);
    for (int i = 0; i < N; i++)
        cin >> E[i];

    int g = -1, h = -1, G_leaders = 0, H_leaders = 0;
    //vector<bool> is_leader (N, false);
    int firstG = breed.find('G'),
    firstH = breed.find('H'),
    lastG = breed.rfind('G'),
    lastH = breed.rfind('H');

    if (E[firstG] > lastG) {
        g = firstG;
        G_leaders++;
    }
    if (E[firstH] > lastH) {
        h = firstH;
        H_leaders++;
    }

    for (int i = 0; i < N; i++) {
        switch (breed[i]) {
            case 'G':
                if (i <= h && E[i] > h) {
                    G_leaders++;
                    g = i;
                }
                break;
                
            default:
                if (i <= g && E[i] > g) {
                    H_leaders++;
                    h = i;
                }
                break;
        }
    }
    cout << G_leaders * H_leaders << endl;
}
