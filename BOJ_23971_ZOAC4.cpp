#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    double h, w, n, m;
    cin >> h >> w >> n >> m;
    cout.precision(0);
    cout << fixed << ceil(h / (n + 1)) * ceil(w /(m + 1));
    return 0;
}
