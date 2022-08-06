#include <iostream>
using namespace std;

int main(void) {
    int x, l, r;
    cin >> x >> l >> r;
    if(x <= l) {
        cout << l << endl;
    } else if(x >= r) {
        cout << r << endl;
    } else {
        cout << x << endl;
    } 
    return 0;
}
