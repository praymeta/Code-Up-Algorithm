#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b == c)
        cout << a << '+' << b << '=' << c;
    else if(a - b == c)
        cout << a << '-' << b << '=' << c;
    else if(a * b == c)
        cout << a << '*' << b << '=' << c;
    else if(a / b == c)
        cout << a << '/' << b << '=' << c;
    else if(a == b + c)
        cout << a << '=' << b << '+' << c;
    else if(a == b - c)
        cout << a << '=' << b << '-' << c;
    else if(a == b * c)
        cout << a << '=' << b << '*' << c;
    else
        cout << a << '=' << b << '/' << c;
}
