#include <iostream>
using namespace std;

int main(void) {
    int n, t;
    cin >> n >> t;
    t -= 1;
    t %= (4 * n - 2);
    if(t == 0) cout << 1;
    else if(t < 2 * n) cout << t + 1;
    else cout << (4 * n - 1) - t;
}
