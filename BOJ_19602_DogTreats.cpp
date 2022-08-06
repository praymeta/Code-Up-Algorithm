#include <iostream>
using namespace std;

int main(void) {
    int s, m, l;
    cin >> s >> m >> l;
    if((s + 2 * m + 3 * l) >= 10) {
        cout << "happy" << endl;
    } else {
        cout << "sad" << endl;
    }
    return 0;
}
