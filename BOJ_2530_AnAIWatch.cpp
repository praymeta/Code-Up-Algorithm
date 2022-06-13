#include <iostream>
using namespace std;

int main(void) {
    int h, m, s, d, tmpH, tmpM, tmpS;
    cin >> h >> m >> s;
    cin >> d;
    s += d;

    while(1) {
        if (s >= 60) {
            m++;
            s -= 60;
            if (m >= 60) {
                h++;
                m -= 60;
                if (h >= 24) {
                    h -= 24;
                }
            }
        } else {
            break;
        }
    }
    cout << h << ' ' << m << ' ' << s << endl;
    return 0;
}
