#include <iostream>
using namespace std;

int main(void) {
    string how;
    int step, cm = 0;
    for(int i = 0; i < 4; i++) {
        cin >> how >> step;
        if(how == "Es") cm += step * 21;
        else cm += step * 17;
    }
    cout << cm;
}
