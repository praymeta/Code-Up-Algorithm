#include <iostream>
using namespace std;

int main(void) {
    int n, m, i, j, k;
    cin >> n >> m;
    int basket[n];
    for(int p = 0; p < n; p++) basket[p]= 0;
    for(int p = 0; p < m; p++) {
        cin >> i >> j >> k;
        for(int q = i - 1; q < j; q++) basket[q] = k;
    }
    for(int p = 0; p < n; p++) cout << basket[p] << ' ';
}
