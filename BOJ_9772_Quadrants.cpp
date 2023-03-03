#include <iostream>
using namespace std;

int main(void) {
    double x, y;
    while(cin >> x >> y) {
        if(x == 0 && y == 0) {
            cout << "AXIS";
            break;
        }
        if(x == 0 || y == 0) cout << "AXIS\n";
        else if(x > 0 && y > 0) cout << "Q1\n";
        else if(x < 0 && y > 0) cout << "Q2\n";
        else if(x < 0 && y < 0) cout << "Q3\n";
        else cout << "Q4\n";
    }
}
