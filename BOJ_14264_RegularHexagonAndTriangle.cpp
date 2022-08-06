#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    double l;
    cin >> l;
    l = l * l * sqrt(3) / 4;
    cout.precision(15);
    cout << fixed <<  l << endl;
    return 0;
}
