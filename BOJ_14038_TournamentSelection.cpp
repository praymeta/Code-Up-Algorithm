#include <iostream>
using namespace std;

int main(void) {
    int w = 0, l = 0;
    char score[6];
    for(int i = 0; i < 6; i++) {
        cin >> score[i];
        if(score[i] == 'W') {
            w++;
        }
    }
    if(w >= 5) {
        cout << "1" << endl;
    } else if(w >= 3) {
        cout << "2" << endl;
    } else if(w >= 1) {
        cout << "3" << endl;
    } else {
        cout << "-1" << endl;
    }
    return 0;
}
