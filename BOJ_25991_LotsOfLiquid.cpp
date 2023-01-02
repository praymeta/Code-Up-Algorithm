#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    double side[n], sum = 0;
    cout.precision(10);
    for(int i = 0; i < n; i++) {
        cin >> side[i];
        sum += pow(side[i], 3);
    }
    cout << fixed << cbrt(sum);
}
