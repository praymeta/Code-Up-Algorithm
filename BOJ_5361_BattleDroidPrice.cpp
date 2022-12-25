#include <iostream>
using namespace std;

int main(void) {
    int t;
    double a, b, c, d, e, ap, bp, cp, dp, ep;
    cin >> t;
    cout.precision(2);
    for(int i = 0; i < t; i++) {
        cin >> a >> b >> c >> d >> e;
        ap = a * 350.34;
        bp = b * 230.90;
        cp = c * 190.55;
        dp = d * 125.30;
        ep = e * 180.90;
        cout << fixed << '$' << ap + bp + cp + dp + ep << '\n';
    }
}
