#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int side[3];
    while(true) {
        cin >> side[0] >> side[1] >> side[2];
        if(side[0] == 0 && side[1] == 0 && side[2] == 0) {
            break;
        }
        sort(side, side + 3, greater<>());
        if(side[0] < side[1] + side[2]) {
            if(side[0] == side[1] && side[1] == side[2]) {
                cout << "Equilateral" << '\n';
            } else if(side[0] == side[1] || side[1] == side[2] || side[2] == side[0]) {
                cout << "Isosceles" << '\n';
            } else {
                cout << "Scalene" << '\n';
            }
        } else {
            cout << "Invalid" << '\n';
        }
    }
}
