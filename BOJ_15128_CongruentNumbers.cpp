#include <iostream>
using namespace std;

int main(void) {
    long long p1, q1, p2, q2;
    cin >> p1 >> q1 >> p2 >> q2;
    if(p1 * p2 % (q1 * q2 * 2) == 0) {
        cout << '1' << endl;
    } else {
        cout << '0' << endl;
    }
    return 0;
}
