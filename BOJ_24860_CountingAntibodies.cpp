#include <iostream>
using namespace std;

int main(void) {
    long long v1, j1, v2, j2, vv, dd, jj;
    cin >> v1 >> j1;
    cin >> v2 >> j2;
    cin >> vv >> dd >> jj;
    cout << v1 * j1 * vv * dd * jj + v2 * j2 * vv * dd * jj << endl;
    
    return 0;
}
