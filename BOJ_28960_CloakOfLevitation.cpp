#include <iostream>
using namespace std;

int main(void) {
    float h, l, a, b;
    cin >> h >> l >> a >> b;
    if(l >= a && l >= b) {
        if(min(a / 2, b / 2) <= h)
            cout << "YES";
        else
            cout << "NO";
    } else if(l >= a) {
        if(b / 2 <= h)
            cout << "YES";
        else
            cout << "NO";
    } else if(l >= b) {
        if(a / 2 <= h)
            cout << "YES";
        else
            cout << "NO";
    } else {
        cout << "NO";
    }
}
