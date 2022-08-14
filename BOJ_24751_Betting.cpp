#include <iostream>
using namespace std;

int main(void) {
    double a;
    cin >> a;
    cout.precision(10);
    cout << fixed << 100 / a << endl;
    cout << 100 / (100 - a);
    return 0;
}
