#include <iostream>
using namespace std;

int main(void) {
    int s, a, b, y = 250;
    cin >> s >> a >> b;
    while(a < s) {
        a += b;
        y += 100;
    }
    cout << y;
    return 0;
}
