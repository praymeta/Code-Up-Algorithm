#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    cout << (n - (n * 22 / 100)) << ' ' << (n - (n * 2 / 10 * 22 / 100)) << endl;
    return 0;
}
