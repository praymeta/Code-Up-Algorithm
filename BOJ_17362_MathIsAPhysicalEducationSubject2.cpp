#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    n %= 8;
    if(n >= 1 && 5 >= n) {
        cout << n << endl;
    } else if (n == 6 || n == 7) {
        cout << 10 - n << endl;
    } else {
        cout << 2 << endl;
    }
    return 0;
}
