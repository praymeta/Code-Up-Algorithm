#include <iostream>
using namespace std;

int main(void) {
    int n, x, y, t;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y >> t;
        cout << "Data set: " << x << ' ' << y << ' ' << t << '\n';
        for(int j = 0; j < t; j++) {
            if(x >= y) x /= 2;
            else y /= 2;
        }
        if(x >= y) cout << x << ' ' << y << '\n';
        else cout << y << ' ' << x << '\n';
        cout << '\n';
    }
}
