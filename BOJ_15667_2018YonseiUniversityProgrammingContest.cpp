#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    for(int k = 0; k < n; k++) {
        if(1 + k + pow(k, 2) == n) {
            cout << k;
            break;
        }
    }
}
