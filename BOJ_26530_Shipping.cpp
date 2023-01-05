#include <iostream>
using namespace std;

int main(void) {
    string product;
    int n, t;
    double count, price, total = 0;
    cin >> n;
    cout.precision(2);
    for(int i = 0; i < n; i++) {
        cin >> t;
        for(int j = 0; j < t; j++) {
            cin >> product >> count >> price;
            total += count * price;
        }
        cout << fixed << '$' << total << '\n';
        total = 0;
    }
}
