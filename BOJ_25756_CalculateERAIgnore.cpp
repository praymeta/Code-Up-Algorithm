#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    double portion[n], temp;
    for(int i = 0; i < n; i++) {
        cin >> portion[i];
    }
    cout.precision(7);
    temp = portion[0] * 0.01;
    cout << fixed << temp * 100 << '\n';
    if(n != 1) {
        for(int i = 1; i < n; i++) {
            temp = 1 - (1 - temp) * (1 - portion[i] * 0.01);
            cout << fixed << temp * 100 << '\n';
        }
    }
}
