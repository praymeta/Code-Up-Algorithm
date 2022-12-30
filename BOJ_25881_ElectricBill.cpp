#include <iostream>
using namespace std;

int main(void) {
    int a, b, n, consumption, extra;
    cin >> a >> b >> n;
    for(int i = 0; i < n; i++) {
        cin >> consumption;
        cout << consumption << ' ';
        if(consumption > 1000) {
            extra = consumption - 1000;
            consumption = 1000;
            cout << consumption * a + extra * b << '\n';
        } else {
            cout << consumption * a << '\n';
        }
    }
}
