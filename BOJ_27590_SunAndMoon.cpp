#include <iostream>
using namespace std;

int main(void) {
    int ds, ys, dm, ym, year = 0;
    cin >> ds >> ys >> dm >> ym;
    while(true) {
        year++;
        if(ds == ys - 1) ds = 0;
        else ds += 1;
        if(dm == ym - 1) dm = 0;
        else dm += 1;

        if(ds == 0 && dm == 0) {
            cout << year;
            break;
        }
    }
}
