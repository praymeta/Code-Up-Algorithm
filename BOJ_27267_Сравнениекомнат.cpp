#include <iostream>
using namespace std;

int main(void) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a * b == c * d) cout << 'E';
    else (a * b > c * d) ? cout << 'M' : cout << 'P';
}
