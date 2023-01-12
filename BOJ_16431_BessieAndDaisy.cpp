#include <iostream>
using namespace std;

int main(void) {
    int bessie[2], daisy[2], john[2], b, d;
    cin >> bessie[0] >> bessie[1];
    cin >> daisy[0] >> daisy[1];
    cin >> john[0] >> john[1];
    b = max(abs(bessie[0] - john[0]), abs(bessie[1] - john[1]));
    d = abs(daisy[0] - john[0]) + abs(daisy[1] - john[1]);
    if(b > d) cout << "daisy";
    else if(d > b) cout << "bessie";
    else cout << "tie";
}
