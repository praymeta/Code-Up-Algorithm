#include <iostream>
using namespace std;

int main(void) {
    int a, b, an, am, bn, bm;
    cin >> a >> b;
    an = a / 4;
    am = a % 4;
    if(am == 0) {
        am = 4;
        an -= 1;
    }
    bn = b / 4;
    bm = b % 4;
    if(bm == 0) {
        bm = 4;
        bn -= 1;
    }
    cout << abs(an - bn) + abs(am - bm);
}
