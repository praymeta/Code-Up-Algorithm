#include <iostream>
using namespace std;

int main(void) {
    int d, h, m;
    cin >> d >> h >> m;
    if(d <= 11) {
        if(d < 11) {
            cout << "-1" << endl;
            return 0;
        }
        if(h <= 11) {
            if(h < 11) {
                cout << "-1" << endl;
                return 0;
            }
            if(m < 11) {
                cout << "-1" << endl;
                return 0;
            }
        }
    }
    if(d >= 11) {
        if(m >= 11) {
            m -= 11;
        } else {
            h--;
            m = 60 - (11 - m);
        }
        if(h >= 11) {
            h -= 11;
        } else {
            d--;
            h = 24 - (11 - h);
        }
        d -= 11;
        cout << d * 24 * 60 + h * 60 + m << endl;
    }
    return 0;
}
