#include <iostream>
using namespace std;

int main(void) {
    long r, c, n;
    cin >> r >> c >> n;
    if (r % n == 0) {
        r /= n;
    } else {
        r = r / n + 1;
    }
    if (c % n == 0) {
        c /= n;
    } else {
        c = c / n + 1;
    }
    cout << r * c << endl;
    return 0;
}
