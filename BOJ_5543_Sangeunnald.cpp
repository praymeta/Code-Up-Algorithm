#include <iostream>
using namespace std;

int main(void) {
    int burger[3], beverage[2], sum;
    for(int i = 0; i < 5; i++) {
        if (i <= 2) {
            cin >> burger[i];
        } else {
            cin >> beverage[i - 3];
        }
    }
    sum = min(min(burger[0], burger[1]), burger[2]) + min(beverage[0], beverage[1]);
    cout << sum - 50 << endl;
    return 0;
}
