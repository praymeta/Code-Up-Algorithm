#include <iostream>
using namespace std;

int main(void) {
    int n, temp, cnt = 1;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }
    temp = h[n - 1];
    for(int i = n - 1; i >= 0; i--) {
        if(h[i] > temp) {
            temp = h[i];
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
