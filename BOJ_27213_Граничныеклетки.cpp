#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    if(a == 1 || b == 1) cout << a * b;
    else cout << 2 * a + (b - 2) * 2;
}
