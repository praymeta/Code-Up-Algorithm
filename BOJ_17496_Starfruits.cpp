#include <iostream>
using namespace std;

int main(void) {
    int n, t, c, p;
    cin >> n >> t >> c >> p;
    cout << p * ((n - 1) / t) * c << endl;
    return 0;
}
