#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    for(int i = 0; i < 2 * n - 1; i++) {
        for(int j = 0; j < n; j++) {
            if(i < n) {
                if(j <= i) {
                    cout << "*";
                }
            } else {
                if(j >= i - n + 1) {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
}
