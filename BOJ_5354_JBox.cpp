#include <iostream>
using namespace std;

int main(void) {
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        for(int j = 0; j < x; j++) {
            if(j == 0 || j == x - 1) {
                for(int k = 0; k < x; k++) {
                    cout << '#';
                }
                cout << '\n';
            } else {
                for(int k = 0; k < x; k++) {
                    if(k == 0 || k == x - 1) {
                        cout << '#';
                    } else {
                        cout << 'J';
                    }
                }
                cout << '\n';
            }
        }
        cout << '\n';
    }
}
