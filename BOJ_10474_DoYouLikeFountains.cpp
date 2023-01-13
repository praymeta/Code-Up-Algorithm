#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    while(cin >> a >> b && a != 0 && b != 0) {
        cout << a / b << ' ' << a % b << " / " << b << '\n';
    } 
}
