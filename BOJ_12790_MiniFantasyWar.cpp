#include <iostream>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b, c, d, aa, bb, cc, dd;
        cin >> a >> b >> c >> d >> aa >> bb >> cc >> dd;
        a += aa;
        if(a < 1) a = 1;
        b += bb;
        if(b < 1) b = 1;
        c += cc;
        if(c < 0) c = 0;
        d += dd;
        cout << a + 5 * b + 2 * c + 2 * d << '\n';
    }
}
