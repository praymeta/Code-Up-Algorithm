#include <iostream>
using namespace std;

int main(void) {
    int y;
    cin >> y;
    if(y == 1996 || y == 1997 || y == 2000 || y == 2007 || y == 2008 || y == 2013 || y == 2018) {
        cout << "SPbSU" << endl;
    } else if(y == 2006) {
        cout << "PetrSU, ITMO" << endl;
    } else {
        cout << "ITMO" << endl;
    }
    return 0;
}
