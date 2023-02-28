#include <iostream>
using namespace std;

int main(void) {
    int t;
    double value;
    string unit;
    cin >> t;
    cout.precision(4);
    for(int i = 0; i < t; i++) {
        cin >> value >> unit;
        if(unit == "kg") cout << fixed << value * 2.2046 << " lb\n";
        else if(unit == "lb") cout << fixed << value * 0.4536 << " kg\n";
        else if(unit == "l") cout << fixed << value * 0.2642 << " g\n";
        else cout << fixed << value * 3.7854 << " l\n";
    }
}
