#include <iostream>
using namespace std;

int main(void) {
    int number;
    double a, b, c, d, value[4];
    cin >> a >> b >> c >> d;
    value[0] = a / c + b / d;
    value[1] = c / d + a / b;
    value[2] = d / b + c / a;
    value[3] = b / a + d / c;
    number = 0;
    for(int i = 0; i < 4; i++) {
        if(value[i] > value[number]) {
            number = i;
        }
    }
    cout << number;
}
