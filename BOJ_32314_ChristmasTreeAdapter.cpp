#include <iostream>
using namespace std;

int main(void) {
    int a, w, v;
    cin >> a >> w >> v;

    if (a <= w / v) {
        cout << 1;
    } else {
        cout << 0;
    }
}
