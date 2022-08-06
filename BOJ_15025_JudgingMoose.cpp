#include <iostream>
using namespace std;

int main(void) {
    int l, r;
    cin >> l >> r;
    if(r == l) {
        if(r == 0) {
            cout << "Not a moose" << endl;
        } else {
            cout << "Even " << r + l << endl;
        }
    } else {
        cout << "Odd " << 2 * max(r, l) << endl;
    }
    return 0;
}
