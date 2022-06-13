#include <iostream>
using namespace std;

int main(void) {
    int t, aCnt = 0, bCnt = 0, cCnt = 0;
    cin >> t;
    if (t % 10 != 0) {
        cout << "-1" << endl;
    } else if (t == 0) {
        cout << "0 0 0" << endl;
    } else {
        while(1) {
            if (t >= 300) {
                aCnt++;
                t -= 300;
            } else if (t >= 60) {
                bCnt++;
                t -= 60;
            } else {
                cCnt++;
                t -= 10;
            }
            if (t == 0) {
                break;
            }
        }
        cout << aCnt << ' ' << bCnt << ' ' << cCnt << endl;
    }
    return 0;
}
