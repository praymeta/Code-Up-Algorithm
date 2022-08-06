#include <iostream>
using namespace std;

int main(void) {
    int u1, t1, u2, t2;

    cin >> u1 >> t1 >> u2 >> t2;
    cout << (u1 * 56) + (t1 * 24) + (u2 * 14) + (t2 * 6) << endl;
    return 0;
}
