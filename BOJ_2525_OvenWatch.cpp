#include <iostream>
using namespace std;

int main(void) {
    int time, min, cooked;
    cin >> time >> min;
    cin >> cooked;
    
    time += cooked / 60;
    min += cooked % 60;
    if(min >= 60) {
        time++;
        min -= 60;
    }
    if(time >= 24) {
        time -= 24;
    }
    cout << time << ' ' << min << endl;
}
