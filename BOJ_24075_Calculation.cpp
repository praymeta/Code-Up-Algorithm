#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    cout << max(a + b, a - b) << endl;
    cout << min(a + b, a - b);
    return 0;
}
