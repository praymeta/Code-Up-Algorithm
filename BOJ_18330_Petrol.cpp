#include <iostream>
using namespace std;

int main(void) {
    int n, k, fare;
    cin >> n >> k;
    k += 60;
    if(n <= k) {
        fare = n * 1500;
    } else {
        fare = k * 1500;
        n -= k;
        fare += n * 3000;
    }
    cout << fare << endl;
    return 0;
}
