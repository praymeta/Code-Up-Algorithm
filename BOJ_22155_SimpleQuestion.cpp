#include <iostream>
using namespace std;

int main(void) {
    int n, i, f;
    cin >> n;
    for(int j = 0; j < n; j++) {
        cin >> i >> f;
        if((i <= 1 && f <= 2) || (f <= 1 && i <= 2)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
