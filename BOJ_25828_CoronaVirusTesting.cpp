#include <iostream>
using namespace std;

int main(void) {
    int g, p, t, s1, s2;
    cin >> g >> p >> t;
    s1 = g * p;
    s2 = g + p * t;
    if(s1 < s2) {
        cout << '1';
    } else if(s2 < s1) {
        cout << '2';
    } else {
        cout << '0';
    }
}
