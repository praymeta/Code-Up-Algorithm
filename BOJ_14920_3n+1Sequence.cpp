#include <iostream>
using namespace std;

int main(void) {
    int c1, cnt = 1;
    cin >> c1;
    while(c1 != 1) {
        if(c1 % 2 == 0) c1 = c1 / 2;
        else c1 = 3 * c1 + 1;
        cnt++;
    }
    cout << cnt;
}
