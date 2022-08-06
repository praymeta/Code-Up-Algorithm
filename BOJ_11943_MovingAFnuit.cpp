#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
    int a, b, c, d, cnt = 0;
    cin >> a >> b;
    cin >> c >> d;

    if (abs(a - b) > abs(c - d)) {
        if (a > b) {
            cnt = c + b;
        } else {
            cnt = a + d;
        }
    } else {
        if(c > d) {
            cnt = a + d;
        } else {
            cnt = b + c;
        }
    }
    cout << cnt << endl;
    return 0;
}
