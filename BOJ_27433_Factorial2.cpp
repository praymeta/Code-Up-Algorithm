#include <iostream>
using namespace std;

int main(void) {
    int n;
    unsigned long long factorial = 1;
    cin >> n;
    for(int i = n; i >= 1; i--) {
        factorial *= i;
    }
    cout << factorial;
}
