#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    double a;
    cin >> a;
    a /= 3.14159265358979;
    a = sqrt(a);
    cout.precision(10);
    cout << fixed << 2 * a * 3.14159265358979;
    return 0;
}
