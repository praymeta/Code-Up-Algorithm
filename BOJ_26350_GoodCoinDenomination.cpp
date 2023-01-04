#include <iostream>
using namespace std;

int main(void) {
    int n, c, check = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> c;
        int coin[c];
        cout << "Denominations: ";
        for(int j = 0; j < c; j++) {
            cin >> coin[j];
            cout << coin[j] << ' ';
        }
        cout << '\n';
        for(int j = 0; j < c - 1; j++) {
            if(coin[j] * 2 > coin[j + 1]) {
                check = 0;
            }
        }
        if(check == 0) {
            cout << "Bad coin denominations!" << '\n';
        } else {
            cout << "Good coin denominations!" << '\n';
        }
        check = 1;
        cout << '\n';
    }
}
