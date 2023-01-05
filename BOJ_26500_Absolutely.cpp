#include <iostream>
using namespace std;

int main(void) {
    double n, a, b;
    cin >> n;
    cout.precision(1);
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(a >= b) {
            cout << fixed << a - b << '\n';
        } else {
            cout << fixed << b - a << '\n';
        }
    }
}
