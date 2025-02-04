#include <iostream>
using namespace std;

int main(void) {
    int x;
    cin >> x;

    if (x % 3 == 0) {
        cout << 'S';
    } else if (x % 3 == 1) {
        cout << 'U';
    } else {
        cout << 'O';
    }
}
