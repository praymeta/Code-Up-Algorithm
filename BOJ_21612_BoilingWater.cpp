#include <iostream>
using namespace std;

int main(void) {
    int p, b;
    cin >> b;
    p = (5 * b) - 400;
    cout << p << endl;
    if(p == 100) {
        cout << '0' << endl;
    } else if(p > 100) {
        cout << "-1" << endl;
    } else {
        cout << '1' << endl;
    }
    return 0;
}
