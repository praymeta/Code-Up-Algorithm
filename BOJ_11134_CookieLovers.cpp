#include <iostream>
using namespace std;

int main(void) {
    int t, n, c, day = 0;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> c;
        while(n > 0) {
            day++;
            n -= c;
        }
        cout << day << '\n';
        day = 0;
    }
}
