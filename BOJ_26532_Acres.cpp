#include <iostream>
using namespace std;

int main(void) {
    int d1, d2;
    cin >> d1 >> d2;
    if(d1 * d2 % 4840 != 0) {
        cout << d1 * d2 / 4840 / 5 + 1;
    } else {
        cout << d1 * d2 / 4840 / 5;
    }
}
