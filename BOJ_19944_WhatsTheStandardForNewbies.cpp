#include <iostream>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;

    if (m == 1 || m == 2) {
        cout << "NEWBIE!" << endl;
    } else if (m <= n) {
        cout << "OLDBIE!" << endl;
    } else {
        cout << "TLE!" << endl;
    }
    return 0;
}
