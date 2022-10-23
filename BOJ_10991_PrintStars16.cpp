#include <iostream>
using namespace std;

int main(void) {
    int n, ck = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n - 1; j++) {
            cout << ' ';
        }
        for(int k = 0; k < (n * 2) - ((n - i) * 2 - 1); k++) {
            if(ck == 1) {
                cout << '*';
                ck = 0;
            } else {
                cout << ' ';
                ck = 1;
            }
        }
        cout << endl;
        ck = 1;
    }
}
