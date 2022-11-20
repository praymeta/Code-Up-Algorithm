#include <iostream>
using namespace std;

int main(void) {
    int n;
    long long lt, wt, le, we, t, e;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> lt >> wt >> le >> we;
        if (lt * wt > le * we) {
            cout << "TelecomParisTech" << '\n';
        } else if (le * we > lt * wt) {
            cout << "Eurecom" << '\n';
        } else {
            cout << "Tie" << '\n';
        }
    }
}

