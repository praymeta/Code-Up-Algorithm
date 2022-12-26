#include <iostream>
using namespace std;

int main(void) {
    int n, sum = 0;
    while(true) {
        cin >> n;
        if(n == 0) {
            break;
        }
        for(int i = n; i >= 1; i--) {
            sum += i;
        }
        cout << sum << '\n';
        sum = 0;
    }
}
