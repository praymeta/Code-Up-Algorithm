#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    long long n;
    cin >> n;
    double m = sqrt(n);
    cout.precision(10);
    cout << fixed << 4 * m << endl;
    return 0;
}
