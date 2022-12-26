#include <iostream>
using namespace std;

int main(void) {
    double x, y, n, price;
    cin >> x >> y;
    price = x / y * 1000;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        price = min(price, x / y * 1000);
    }
    cout.precision(2);
    cout << fixed << price;
}
