#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(void) {
    int n, m, k;
    cin >> n >> m >> k;
    cout << n - abs(m - k) << endl;
    return 0;
}
