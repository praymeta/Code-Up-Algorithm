#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cin >> a;
    cin >> b;
    b -= a;
    if(1 <= b && b <= 20) {
        cout << "You are speeding and your fine is $100." << endl;
    } else if(21 <= b && b <= 30) {
        cout << "You are speeding and your fine is $270." << endl;
    } else if(31 <= b) {
        cout << "You are speeding and your fine is $500." << endl;
    } else {
        cout << "Congratulations, you are within the speed limit!" << endl;
    }
    return 0;
}
