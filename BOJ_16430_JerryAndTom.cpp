#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    if(b % a == 0) {
        b = b / a;
        a = 1;
    }
    cout << b - a << ' ' << b << endl;
    return 0;
}
