#include <iostream>
using namespace std;

int main(void) {
    int x, y, r;
    cin >> x >> y >> r;
    cout << x + r << ' ' << y + r << endl;
    cout << x - r << ' ' << y + r << endl;
    cout << x - r << ' ' << y - r << endl;
    cout << x + r << ' ' << y - r;
    return 0;
}
