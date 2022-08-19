#include <iostream>
using namespace std;

int main(void) {
    int a, b, c, avg;
    cin >> a >> b >> c;
    avg = (a + b + c) / 3;
    cout << (c - avg) + (avg - a);
    return 0;
}
