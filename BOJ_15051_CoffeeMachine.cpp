#include <iostream>
using namespace std;

int main(void) {
    int a1, a2, a3, t1, t2, t3;
    cin >> a1 >> a2 >> a3;
    t1 = 2 * a2 + 4 * a3;
    t2 = 2 * a1 + 2 * a3;
    t3 = 4 * a1 + 2 * a2;
    cout << min(t1, min(t2, t3)) << endl;
    return 0;
}
