#include <iostream>
using namespace std;

int main(void) {
    int n, minOdd = 100, sum = 0;
    for(int i = 0; i < 7; i++) {
        cin >> n;
        if(n % 2 != 0) {
            sum += n;
            minOdd = min(minOdd, n);
        }
    }
    if(sum == 0) {
        cout << "-1";
    } else {
        cout << sum << endl << minOdd;
    }
}
