#include <iostream>
using namespace std;

int main(void) {
    long long t, n, m;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        cin >> n >> m;
        cout << "Scenario #" << i << ":\n";
        cout << (n + m) * (m - n + 1) / 2 << "\n\n";
    }
}
