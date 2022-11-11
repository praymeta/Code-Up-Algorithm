#include <iostream>
using namespace std;

int main(void) {
    int n, y = 0, m = 0, tempY, tempM;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> tempY;
        tempM = tempY;
        while(1) {
            if (tempY < 30) {
                y += 10;
                break;
            } else {
                y += 10;
                tempY -= 30;
            }
        }
        while(1) {
            if (tempM < 60) {
                m += 15;
                break;
            } else {
                m += 15;
                tempM -= 60;
            }
        }
    }
    if (m < y) {
        cout << "M" << ' ' << m << '\n';
    } else if (y < m) {
        cout <<  "Y" << ' ' << y << '\n';
    } else {
        cout << "Y" << ' ' << "M" << ' ' << y << '\n';
    }
}
