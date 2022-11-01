#include <iostream>
using namespace std;

int main(void) {
    int all, price[9];
    cin >> all;
    for(int i = 0; i < 9; i++) {
        cin >> price[i];
        all -= price[i];
    }
    cout << all;
}
