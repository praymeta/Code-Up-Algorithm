#include <iostream>
using namespace std;

int main(void) {
    int a, b, c, who;
    cin >> a >> b >> c;
    who = max(a, max(b, c));
    cout << (who - a) + (who - b) + (who - c) << endl;
    return 0;
}
