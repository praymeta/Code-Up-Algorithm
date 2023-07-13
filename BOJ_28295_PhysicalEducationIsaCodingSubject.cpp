#include <iostream>
using namespace std;

int main(void) {
    int t, way = 0;
    for(int i = 0; i < 10; i++) {
        cin >> t;
        switch(t) {
            case 1:
                way = (way + 1) % 4;
                break;
            case 2:
                way = (way + 2) % 4;
                break;
            case 3:
                way = (way + 3) % 4;
        }
    }
    switch(way) {
        case 0:
            cout << 'N';
            break;
        case 1:
            cout << 'E';
            break;
        case 2:
            cout << 'S';
            break;
        case 3:
            cout << 'W';
    }
}
