#include <iostream>
using namespace std;

int main(void) {
    int n[6];
    cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5];
    for(int i = 0; i < 6; i++) {
        if(i <= 1) {
            cout << 1 - n[i] << ' ';
        } else if(i > 1 && i <= 4) {
            cout << 2 - n[i] << ' ';
        } else {
            cout << 8 - n[i] << ' ';
        }
    }
    cout << '\n';
    return 0;
}
