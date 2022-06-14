#include <iostream>
using namespace std;

int main(void) {
    int k, d, a;
    scanf("%d/%d/%d", &k, &d, &a);
    if (d == 0 || (k + a) < d) {
        cout << "hasu" << endl;
    } else {
        cout << "gosu" << endl;
    }
    return 0;
}
