#include <iostream>
using namespace std;

int main(void) {
    int ca, ba, pa, cr, br, pr, cant = 0;
    cin >> ca >> ba >> pa;
    cin >> cr >> br >> pr;
    ca -= cr; ba -= br; pa -= pr;
    if(ca < 0) {
        cant += abs(ca);
    }
    if(ba < 0) {
        cant += abs(ba);
    }
    if(pa < 0) {
        cant += abs(pa);
    }
    cout << cant << endl;
    return 0;
}
