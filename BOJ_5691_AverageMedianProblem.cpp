#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    while(cin >> a >> b) {
        if(a == 0 && b == 0) break;
        if(a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        cout << min(2 * a - b, min((a + b) / 2, 2 * b - a)) << '\n';
    }
}
