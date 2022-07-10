#include <iostream>
using namespace std;

int main(void) {
    double mile;
    cin >> mile;
    mile = 100.0 / ((1.609344 / 3.785411784) * mile);
    cout.precision(10);
    cout << fixed << mile << endl;
}
