#include <iostream>
using namespace std;

int main(void) {
    float d[3];
    float a, b, c;
    cin >> d[0] >> d[1] >> d[2];
    b = (d[0] - d[1] + d[2]) / 2;
    c = d[2] - b;
    a = d[0] - b;
    if(a <= 0 || b <= 0 || c <= 0)
        cout << -1;
    else {
        cout << 1 << '\n';
        cout << fixed;
        cout.precision(1);
        cout << a << ' ' << b << ' ' << c;
    }
}
