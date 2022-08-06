#include <iostream>
using namespace std;

int main(void) {
    int n, n1, n2, n3, n4, n5, n11, n22, n33, n44, n55;
    cin >> n;
    n1 = n / 10000;
    n2 = (n % 10000) / 1000;
    n3 = (n % 1000) / 100;
    n4 = (n % 100) / 10;
    n5 = n % 10;
    n11 = n1;
    n22 = n2;
    n33 = n3;
    n44 = n4;
    n55 = n5;

    for(int i = 1; i < 5; i++) {
        n11 *= n1;
        n22 *= n2;
        n33 *= n3;
        n44 *= n4;
        n55 *= n5;
    }
    cout << n11 + n22 + n33 + n44 + n55 << endl;

    return 0;
}
