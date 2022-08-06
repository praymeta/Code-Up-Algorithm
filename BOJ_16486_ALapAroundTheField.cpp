#include <iostream>
using namespace std;
#define PI 3.141592

int main(void) {
    float d1, d2;
    cin >> d1;
    cin >> d2;
    cout << fixed;
    cout.precision(6);
    cout << (2 * d2 * PI) + (2 * d1) << endl;
    return 0;
}
