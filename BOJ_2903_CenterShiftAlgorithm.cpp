#include <iostream>
using namespace std;

int main(void) {
    int n;
    int x = 2;
    cin >> n;
    while(n--) {
        x += x - 1;
    }
    x *= x;
    cout << x << '\n';
}
