#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int N, ix0;
    double fx0;
    cin >> ix0 >> N;
    fx0 = ix0;
    for(int i = 1; i <= N; i++) {
        if(ix0 % 2) {
            ix0 = (2 * ix0) ^ 6;
            fx0 = ix0;
        } else {
            fx0 = floor(fx0 / 2);
            ix0 = fx0;
            ix0 = ix0 ^ 6;
            fx0 = ix0;
        }
    }
    cout << ix0;
}
