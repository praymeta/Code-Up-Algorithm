#include <iostream>
using namespace std;

int main(void) {
    long n, m, sub;
    cin >> n >> m;
    sub = n - m;
    if(sub < 0) {
        cout << -(sub) << endl;
    } else {
        cout << sub << endl;
    }

    return 0;
}
