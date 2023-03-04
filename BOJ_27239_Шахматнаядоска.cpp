#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    if(n % 8) cout << char(n % 8 + 96) << n / 8 + 1;
    else cout << 'h' << n / 8;
}
