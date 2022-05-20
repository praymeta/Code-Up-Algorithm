#include <iostream>
using namespace std;

int main(void ) {
    int ax, ay, az, cx, cy, cz;
    cin >> ax >> ay >> az;
    cin >> cx >> cy >> cz;
    cout << cx - az << ' ' << cy / ay << ' ' << cz - ax << endl;
    return 0;
}
