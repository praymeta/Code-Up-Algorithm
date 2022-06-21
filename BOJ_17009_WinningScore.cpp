#include <iostream>
using namespace std;

int main(void) {
    int a3, a2, a1, b3, b2, b1, aAll, bAll;
    cin >> a3 >> a2 >> a1;
    cin >> b3 >> b2 >> b1;
    aAll = a3 * 3 + a2 * 2 + a1;
    bAll = b3 * 3 + b2 * 2 + b1;
    if (aAll > bAll) {
        cout << 'A' << endl;
    } else if (aAll < bAll) {
        cout << 'B' << endl;
    } else {
        cout << 'T' << endl;
    }
    return 0;
}
