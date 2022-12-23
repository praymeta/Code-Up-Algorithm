#include <iostream>
using namespace std;

int main(void) {
    int money[4] = {25, 10, 5, 1}, t, c;
    cin >> t;
    while(t--) {
        cin >> c;
        for(int i = 0; i < 4; i++) {
            cout << c / money[i] << ' ';
            c %= money[i];
        }
        cout << '\n';
    }
}
