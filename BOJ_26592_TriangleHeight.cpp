#include <iostream>
using namespace std;

int main(void) {
    int n;
    double a, b, h;
    cin >> n;
    cout.precision(2);
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << fixed << "The height of the triangle is " << 2 * a / b << " units" << '\n';
    }
}
