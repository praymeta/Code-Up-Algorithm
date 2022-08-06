#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int w, j;
    double m;
    cin >> w >> j;
    m = j - w;
    m /= 400;
    cout.precision(10);
    cout << fixed << (1 / (1 + pow(10, m))) << endl;
    return 0;
}
