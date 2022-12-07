#include <iostream>
using namespace std;

int main(void) {
    int t, n, minValue = 100, sumValue = 0;
    cin >> t;
    for(int i = 0; i < t; i++) {
        for(int j = 0; j < 7; j++) {
            cin >> n;
            if(n % 2 == 0) {
                sumValue += n;
                if(n < minValue) {
                    minValue = n;
                }
            }
        }
        cout << sumValue << ' ' << minValue << '\n';
        minValue = 100;
        sumValue = 0;
    }
}
