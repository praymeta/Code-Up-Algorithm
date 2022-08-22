#include <iostream>
using namespace std;

int main(void) {
    int t1, m1, t2, m2, minSum;
    cin >> t1 >> m1 >> t2 >> m2;
    minSum = (t2 * 60 + m2) - (t1 * 60 + m1);
    if(minSum < 0) {
        minSum += 1440;
    }
    cout << minSum << ' ' << minSum / 30;
    return 0;
} 
