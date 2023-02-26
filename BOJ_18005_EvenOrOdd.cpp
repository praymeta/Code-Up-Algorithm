#include <iostream>
using namespace std;

int main(void) {
    unsigned long long n;
    cin >> n;
    if(n % 2) cout << 0;
    else {
        if(n * (n + 1) / 2 % 2) cout << 1;
        else cout << 2;
    }
}
