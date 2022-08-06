#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0) {
        cout << "0 0" << endl;
    } else if ((a + b) % 2 != 0 || a <= b) {
        cout << "-1" << endl;
    } else {
        cout << (a + b) / 2 << ' ' << a - (a + b) / 2 << endl;
    }
    return 0;
}
