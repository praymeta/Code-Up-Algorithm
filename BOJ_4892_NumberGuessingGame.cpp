#include <iostream>
using namespace std;

int main(void) {
    int n0, n1, cnt = 1;
    while (cin >> n0 && n0 != 0) {
        cout << cnt << ". ";
        cnt++;
        n1 = n0 * 3;
        if(n1 % 2 == 0) {
            cout << "even " << (n1 / 2) * 3 / 9 << '\n';
        } else {
            cout << "odd " << (n1 + 1) / 2 * 3 / 9 << '\n';
        }
    }
}
