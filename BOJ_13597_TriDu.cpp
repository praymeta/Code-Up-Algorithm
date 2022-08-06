#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    if(a == b) {
        cout << a << endl;
        return 0;
    } else {
        cout << max(a, b) << endl;
        return 0;
    }
}
