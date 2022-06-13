#include <iostream>
using namespace std;

int main(void) {
    int m, d;
    cin >> m;
    cin >> d;
    if (m < 2) {
        cout << "Before" << endl;
    } else if (m == 2) {
        if(d < 18) {
            cout << "Before" << endl;
        } else if (d == 18) {
            cout << "Special" << endl;
        } else {
            cout << "After" << endl;
        }
    } else {
        cout << "After" << endl;
    }
    return 0;
}
