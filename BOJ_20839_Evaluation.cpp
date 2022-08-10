#include <iostream>
using namespace std;

int main(void) {
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    if(a == x && b == y && c == z) {
        cout << 'A';
    } else if(b == y && c == z) {
        if(2 * x >= a) {
            cout << 'B';
        } else {
            cout << 'C';
        }
    } else if(c == z) {
        if(2 * y >= b) {
            cout << 'D';
        } else {
            cout << 'E';
        }
    }
    return 0;
}
