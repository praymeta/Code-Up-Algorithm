#include <iostream>
using namespace std;

int main(void) {
    int n, m, cars, ent, ext;
    cin >> n >> m;
    cars = m;
    for(int i = 0; i < n; i++) {
        cin >> ent >> ext;
        m += ent - ext;
        if(m < 0) {
            cars = 0;
            break;
        }
        if(m >= cars)
            cars = m;
    }
    cout << cars;
}
