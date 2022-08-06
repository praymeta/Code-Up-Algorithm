#include <iostream>
using namespace std;

int main(void) {
    int n, a, b;
    cin >> n;
    cin >> a >> b;
    cout << min(n, (a / 2 + b)) << endl;
    return 0;
}
