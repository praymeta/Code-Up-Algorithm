#include <iostream>
using namespace std;

int main(void) {
    int l, n;
    char c;
    cin >> l;
    for(int i = 0; i < l; i++) {
        cin >> n >> c;
        for(int j = 0; j < n; j++) {
            cout << c;
        }
        cout << '\n';
    }
}
