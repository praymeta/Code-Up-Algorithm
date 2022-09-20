#include <iostream>
using namespace std;

int main(void) {
    int n, a, d, g, temp, maxValue = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> d >> g;
        temp = a * (d + g);
        if(a == d + g) {
            temp *= 2;
        }
        maxValue = max(maxValue, temp);
    }
    cout << maxValue;
}
