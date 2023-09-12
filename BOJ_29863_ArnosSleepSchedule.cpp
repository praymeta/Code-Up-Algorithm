#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    if(b - a < 0)
        b += 24;
    cout << b - a;
}
