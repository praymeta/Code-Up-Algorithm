#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a == 60 && b == 60 && c == 60) {
        cout << "Equilateral" << endl;
    } else if (a + b + c == 180) {
        if (a == b || b == c || c == a) {
            cout << "Isosceles" << endl;
        } else {
            cout << "Scalene" << endl;
        }
    } else {
        cout << "Error" << endl;
    }
    return 0;
}
