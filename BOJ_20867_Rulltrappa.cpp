#include <iostream>
using namespace std;

int main(void) {
    double m, s, g, a, b, l, r, left, right;
    cin >> m >> s >> g >> a >> b >> l >> r;
    left = (1 / a) * l + m / g;
    right = (1 / b) * r + m / s;
    if(left < right) {
        cout << "friskus";
    } else {
        cout << "latmask";
    }
    return 0;
}
