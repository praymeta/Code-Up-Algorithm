#include <iostream>
using namespace std;

int main(void) {
    int x, k, r1, r2, r3;
    cin >> x >> k;
    x *= 1000, k *= 1000;
    r1 = k + (k / 2) + ((k / 2) /2);
    r2 = (k / 2) + k + (2 * k);
    r3 = k + (2 * k) + (4 * k);
    if(r3 <= x) {
        cout << r3 << endl;
    } else if(r2 <= x) {
        cout << r2 << endl;
    } else if(r1 <= x) {
        cout << r1 << endl;
    } else {
        cout << '0' << endl;
    }
    return 0;
}
