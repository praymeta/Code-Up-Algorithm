#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
    int a, b, c, d, ab, bc, cd, da;
    while(cin >> a >> b >> c >> d) {
        if(a + b + c + d == 0) break;
        int cnt = 0;
        while(true) {
            if(a == b && b == c && c == d) break;
            ab = abs(a - b);
            bc = abs(b - c);
            cd = abs(c - d);
            da = abs(d - a);
            a = ab;
            b = bc;
            c = cd;
            d = da;
            cnt++;
        }
        cout << cnt << '\n';
    }
}
