#include <iostream>
using namespace std;

int main(void) {
    int a, b, ab;
    cin >> a >> b;
    ab = a + b;
    if(ab > 12) {
        while(ab > 12) {
            ab -= 12;
        }
        cout << ab;
    } else {
        cout << ab;
    }
    return 0;
}
