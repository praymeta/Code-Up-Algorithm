#include <iostream>
using namespace std;

int main(void) {
    int n, h, v, bigH, bigV;
    cin >> n >> h >> v;
    bigH = max(h, n - h);
    bigV = max(v, n - v);
    cout << bigH * bigV * 4 << endl;
    return 0;
}
