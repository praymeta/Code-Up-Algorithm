#include <iostream>
using namespace std;

int main(void) {
    double a, b, c;
    cin >> a >> b >> c;
    cout << (int)max((a * b / c), (a / b * c)) << endl;
    return 0;
}
