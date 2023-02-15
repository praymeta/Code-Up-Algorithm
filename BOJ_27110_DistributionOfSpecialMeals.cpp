#include <iostream>
using namespace std;

int main(void) {
    int n, a, b, c, sum = 0;
    cin >> n >> a >> b >> c;
    sum += (n >= a) ? a : n;
    sum += (n >= b) ? b : n;
    sum += (n >= c) ? c : n;
    cout << sum;
}
