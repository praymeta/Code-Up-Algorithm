#include <iostream>
using namespace std;

int main(void) {
    int a, x, b, y, t, aFare, bFare;
    cin >> a >> x >> b >> y >> t;
    if(t >= 45) {
        aFare = a + 21 * x * (t - 30);
        bFare = b + 21 * y * (t - 45);
    } else if(t >= 30) {
        aFare = a + 21 * x * (t - 30);
        bFare = b;
    } else {
        aFare = a;
        bFare = b;
    }
    cout << aFare << ' ' << bFare << endl;
    return 0;
}
