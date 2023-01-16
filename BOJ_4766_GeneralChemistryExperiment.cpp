#include <iostream>
using namespace std;

int main(void) {
    double old, newly;
    cin >> old;
    while(cin >> newly && newly != 999) {
        printf("%.2lf\n", newly - old);
        old = newly;
    }
}
