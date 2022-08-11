#include <iostream>
using namespace std;

int main(void) {
    int n, fac = 1;
    cin >> n;
    for(int i = 2; i <= n; i++) {
        fac *= i;
        fac %= 10;
    }
    cout << fac;
    return 0;
}
