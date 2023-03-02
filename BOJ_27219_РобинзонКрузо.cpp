#include <iostream>
using namespace std;

int main(void) {
    int n, s, r;
    cin >> n;
    s = n / 5;
    r = n % 5;
    for(int i = 0; i < s; i++) {
        cout << 'V';
    }
    for(int i = 0; i < r; i++) {
        cout << 'I';
    }
}
