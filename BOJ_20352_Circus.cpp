#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    long long a;
    double r;
    cin >> a;
    r = a / 3.14159265358979;
    r = sqrt(r);
    cout.precision(10);
    cout << fixed << 2 * r * 3.14159265358979 << endl;
    return 0;
}
