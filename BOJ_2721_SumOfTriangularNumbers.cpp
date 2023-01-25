#include <iostream>
using namespace std;

int triangularNumber(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void) {
    int t, n, sum = 0;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        for(int k = 1; k <= n; k++) {
            sum += k * triangularNumber(k + 1);
        }
        cout << sum << '\n';
        sum = 0;
    }
}
