#include <iostream>
using namespace std;

int main(void) {
    int h1, b1, h2, b2, p1, p2;
    cin >> h1 >> b1 >> h2 >> b2;
    p1 = h1 * 3 + b1;
    p2 = h2 * 3 + b2;
    if(p1 > p2) cout << 1 << ' ' << p1 - p2;
    else if(p2 > p1) cout << 2 << ' ' << p2 - p1;
    else cout << "NO SCORE";
}
