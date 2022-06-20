#include <iostream>
using namespace std;

int main(void) {
    int y1, m1, d1, y2, m2, d2, year1, year2, year3;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    if (m2 > m1) {
        cout << y2 - y1 << endl;
    } else if (m2 < m1) {
        cout << y2 - y1 - 1 << endl;
    } else {
        if (d2 >= d1) {
            cout << y2 - y1 << endl;
        } else {
            cout << y2 - y1 - 1 << endl;
        }
    }
    cout << y2 - y1 + 1 << endl;
    cout << y2 - y1 << endl;
    return 0;
}
