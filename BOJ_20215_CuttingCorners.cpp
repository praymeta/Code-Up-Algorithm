#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    double w, h, result;
    cin >> w >> h;
    result = (w + h) - sqrt(w * w + h * h);
    cout.precision(10);
    cout << fixed << result << endl;
    return 0;
}
