#include <iostream>
using namespace std;

int main(void) {
    double n, d, f, p;
    cin >> n;
    cout.precision(2);
    for(int i = 0; i < n; i++) {
        cin >> d >> f >> p;
        cout << fixed << '$' << d * f * p << '\n';
    }
}
