#include <iostream>
using namespace std;

int main(void) {
    int a, d, k;
    cin >> a >> d >> k;

    if((k - a) % d || (k - a) / d < 0)
        cout << "X\n";
    else
        cout << (k - a) / d + 1 << "\n";
}
