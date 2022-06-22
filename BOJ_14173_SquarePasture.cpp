#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int x11, x12, y11, y12, x21, x22, y21, y22, maxX, maxY, minX, minY, maxEdge;
    cin >> x11 >> y11 >> x12 >> y12;
    cin >> x21 >> y21 >> x22 >> y22;
    maxX = max(x12, x22);
    maxY = max(y12, y22);
    minX = min(x11, x21);
    minY = min(y11, y21);
    maxEdge = max(maxX - minX, maxY - minY);
    cout << maxEdge * maxEdge << endl;
    return 0;
}
