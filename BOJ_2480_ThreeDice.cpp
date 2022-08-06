#include <iostream>
using namespace std;

int main(void) {
    int fir, sec, thr;
    cin >> fir >> sec >> thr;
    
    if(fir == sec && sec == thr) {
        cout << 10000 + (fir * 1000) << endl;
    } else if(fir == sec && sec != thr) {
        cout << 1000 + (fir * 100) << endl;
    } else if(sec == thr && thr != fir) {
        cout << 1000 + (sec * 100) << endl;
    } else if(thr == fir && fir != sec) {
        cout << 1000 + (fir * 100) << endl;
    } else {
        if(fir >= sec && fir >= thr) {
            cout << fir * 100 << endl;
        } else if(sec >= fir && sec >= thr) {
            cout << sec * 100 << endl;
        } else {
            cout << thr * 100 << endl;
        }
    }
    return 0;
}
