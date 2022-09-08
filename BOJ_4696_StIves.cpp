#include <iostream>
using namespace std;

int main(void) {
    double a;
    cout.precision(2);
    while(1) {
        cin >> a;
        if(a == 0) {
            return 0;
        }
        cout << fixed << a * a * a * a + a * a * a + a * a + a + 1 << endl;
    }
}
