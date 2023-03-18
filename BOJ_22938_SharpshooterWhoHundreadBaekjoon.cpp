#include <iostream>
using namespace std;

int main(void) {
    long long x1, x2, y1, y2, r1, r2, distance;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    distance = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    (distance < (r1 + r2) * (r1 + r2)) ? cout << "YES" : cout << "NO";
}
