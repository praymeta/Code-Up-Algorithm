#include <iostream>
using namespace std;

int main(void) {
    int n, minX = 10000, maxX = -10000, minY = 10000, maxY = -10000;
    cin >> n;
    int x[n], y[n];
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        if(x[i] < minX) minX = x[i];
        if(x[i] > maxX) maxX = x[i];
        if(y[i] < minY) minY = y[i];
        if(y[i] > maxY) maxY = y[i];
    }
    cout << (maxX - minX) * (maxY - minY);
}
