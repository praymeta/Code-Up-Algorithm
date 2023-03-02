#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    if(a == b) cout << 0;
    else (a > b) ? cout << 1 : cout << -1;
}
