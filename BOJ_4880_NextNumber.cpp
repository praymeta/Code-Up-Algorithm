#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    while(true) {
        cin >> a >> b >> c;
        if(a == b && b == c && a == 0) break;
        if(b - a == c - b && b - a != 0) {
            cout << "AP" << ' ' << c + (b - a) << '\n';
        } else {
            cout << "GP" << ' ';
            if(a != 0) {
                cout << c * (b / a) << '\n';
            } else {
                cout << c * (c / b) << '\n';
            }
        }
    }
}
