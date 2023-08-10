#include <iostream>
using namespace std;

int main(void) {
    int n, maxSize = 0;
    cin >> n;
    int h[n], w[n];
    for(int i = 0; i < n; i++) {
        cin >> h[i] >> w[i];
        if(maxSize < h[i] * w[i])
            maxSize = h[i] * w[i];
    }
    cout << maxSize;
}
