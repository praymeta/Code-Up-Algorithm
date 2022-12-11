#include <iostream>
using namespace std;

int main(void) {
    int bit;
    for(int i = 0; i < 8; i++) {
        cin >> bit;
        if(bit > 1) {
            cout << "F";
            return 0;
        }
    }
    cout << "S";
}
