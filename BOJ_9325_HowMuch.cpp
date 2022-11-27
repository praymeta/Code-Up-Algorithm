#include <iostream>
using namespace std;

int main(void) {
    int t, s, n, q, p, money = 0;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> s >> n;
        money += s;
        for(int j = 0; j < n; j++) {
            cin >> q >> p;
            money += q * p;
        }
        cout << money << '\n';
        money = 0;
    }
}
