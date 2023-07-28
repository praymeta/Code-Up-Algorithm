#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    cout << min((max(a, b) - min(a, b)), abs(min(a, b) - min(x, y)) + abs(max(a, b) - max(x, y)));
}
