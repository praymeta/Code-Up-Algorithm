#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    char operato;
    cin >> a;
    while(cin >> operato && operato != '=') {
        cin >> b;
        if(operato == '+') {
            a += b;
        } else if(operato == '-') {
            a -= b;
        } else if(operato == '*') {
            a *= b;
        } else {
            a /= b;
        }
    }
    cout << a;
}
