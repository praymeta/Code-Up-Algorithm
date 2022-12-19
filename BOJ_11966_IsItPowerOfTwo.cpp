#include <iostream>
using namespace std;

int main(void) {
    int n, check = 1;
    cin >> n;
    if(n == 1) {
        cout << '1';
        return 0;
    } else {
        for(int i = 0; i < 30; i++) {
            check *= 2;
            if(n == check) {
                cout << '1';
                return 0;
            }
        }
    }
    cout << '0';
    return 0;
}
