#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    long long a;
    cin >> a;
    cout.precision(7);
    cout << fixed <<  4 * sqrt(a) << endl;
    return 0;
}
