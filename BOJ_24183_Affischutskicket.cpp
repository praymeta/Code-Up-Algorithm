#include <iostream>
using namespace std;

int main(void) {
    double a, b, c, g;
    cin >> a >> b >> c;
    a = 2 * a * 74196 / 1000000;
    b = 2 * b * 12474 / 100000;
    c = c * 6237 / 100000;
    cout.precision(10);
    cout << fixed << a + b + c;
    return 0;
}
