#include <iostream>
using namespace std;

int main(void) {
    double k;
    cin >> k;
    k /= 100;
    k += 25;
    cout.precision(10);
    if(k < 100) {
        cout << fixed << "100";
    } else if(k > 2000) {
        cout << fixed << "2000";
    } else {
        cout << fixed << k;
    }
    return 0;
}
