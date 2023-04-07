#include <iostream>
using namespace std;

int main(void) {
    int t, n, m;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> m;
        if(n < 12 || m < 4) cout << -1 << '\n';
        else {
            cout << 11 * m + 4 << '\n';
        }
    }
}
