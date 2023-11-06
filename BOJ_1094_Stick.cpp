#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int X, ans = 0;
    string binary;
    cin >> X;
    for(int i = 6; i >= 0; i--) {
        if(X / pow(2, i) >= 1) {
            binary += '1';
            X -= pow(2, i);
            ans++;
        } else {
            binary += '0';
        }
    }
    cout << ans;
}
