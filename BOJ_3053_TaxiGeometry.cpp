#include <iostream>
using namespace std;

int main(void) {
    double r;
    cin >> r;
    cout.precision(6);
    cout << fixed << r * r * 3.14159265358979 << endl;
    cout << fixed << 2 * r * r;
}
