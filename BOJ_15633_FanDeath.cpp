#include <iostream>
using namespace std;

int main(void) {
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) sum += i;
    }
    cout << sum * 5 - 24;
}
