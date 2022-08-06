#include <iostream>
using namespace std;

int main(void) {
    double a1, r1, p1, p2;
    cin >> a1 >> p1 >> r1 >> p2;
    const double PI = 3.14159265358973;
    double slice = (a1 / p1), whole = (r1 * r1 * PI / p2);
    if(slice > whole) {
        cout << "Slice of pizza" << endl;
    } else {
        cout << "Whole pizza" << endl;
    }
    return 0;
}
