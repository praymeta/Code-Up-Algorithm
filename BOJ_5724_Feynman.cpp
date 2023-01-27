#include <iostream>
using namespace std;

int main(void) {
    int n, sum = 0;
    while(cin >> n && n != 0) {
        for(int i = 1; i <= n; i++) {
            sum += i * i;
        }
        cout << sum << '\n';
        sum = 0;
    }
}
