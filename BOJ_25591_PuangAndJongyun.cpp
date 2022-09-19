#include <iostream>
using namespace std;

int main(void) {
    int n, m, a, b, c, d, q = 0, r = 0;
    cin >> n >> m;
    a = 100 - n, b = 100 - m;
    d = a * b;
    q = d / 100;
    r = d % 100;
    c = 100 - (a + b);
    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << endl;
    cout << c + q << ' ' << r;
}
