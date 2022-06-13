#include <iostream>
using namespace std;

int main(void) {
    int a, b, c, d, e, f, tmp, minVal, maxVal;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    tmp = a + b + c + d;
    minVal = min(a, min(b, min(c, d)));
    maxVal = max(e, f);
    cout << tmp - minVal + maxVal << endl;
    return 0;
}
