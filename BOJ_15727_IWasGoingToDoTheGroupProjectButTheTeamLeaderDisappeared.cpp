#include <iostream>
using namespace std;

int main(void) {
    int l, sum = 0;
    cin >> l;
    for(int i = 5; i >= 1; i--) {
        sum += l / i;
        l = l % i;
    }
    sum += l;
    cout << sum << endl;
    return 0;
}
