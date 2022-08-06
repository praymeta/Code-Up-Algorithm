#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a + b, max(b + c, a + c)) << endl;
    return 0;
}
