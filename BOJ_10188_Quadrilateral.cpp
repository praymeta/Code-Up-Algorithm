#include <iostream>
using namespace std;

int main(void) {
    int n, a, b;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        for(int j = 0; j < b; j++) {
            for(int k = 0; k < a; k++) {
                cout << 'X';
            }
            cout << '\n';
        }
        cout << '\n';
    }
}
