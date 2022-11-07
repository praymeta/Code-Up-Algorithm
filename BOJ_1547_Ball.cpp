#include <iostream>
using namespace std;

int main(void) {
    int m, temp = 1;
    cin >> m;
    int x, y;
    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        if (temp == x) {
            temp = y;
        } else if (temp == y) {
            temp = x;
        }
    }
    cout << temp;
}
