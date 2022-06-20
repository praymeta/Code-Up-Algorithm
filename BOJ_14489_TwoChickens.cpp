#include <iostream>
using namespace std;

int main(void) {
    long a, b, c;
    cin >> a >> b; cin >> c;
    if (a + b >= 2 * c) {
        cout << (a + b) - 2 * c << endl;
    } else {
        cout << a + b << endl;
    }
    return 0;
}
