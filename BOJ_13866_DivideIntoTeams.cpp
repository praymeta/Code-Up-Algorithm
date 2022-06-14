#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
    int a, b, c, d, minVal;
    cin >> a >> b >> c >> d;
    minVal = min(abs((a + b) - (c + d)), min(abs((a + c) - (b + d)), abs((a + d) - (b + c))));
    cout << minVal << endl;
    return 0;
}
