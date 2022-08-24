#include <iostream>
using namespace std;

int main(void) {
    int t, a, b, c, cnt = 0;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        for(int x = 1; x <= a; x++) {
            for(int y = 1; y <= b; y++) {
                for(int z = 1; z <= c; z++) {
                    if(x % y == y % z && y % z == z % x) {
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }
}