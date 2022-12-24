#include <iostream>
using namespace std;

int main(void) {
    int t, n, m;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> m;
        cout << m * 2 - n << ' ' << m - (m * 2 - n) << '\n';
    }
}
