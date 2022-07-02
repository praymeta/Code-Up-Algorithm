#include <iostream>
using namespace std;

int main(void) {
    int n, a, b, c, d, xCnt = 0, yCnt = 0;
    cin >> n >> a >> b >> c >> d;
    int nn = n;
    while(nn > 0) {
        nn -= a;
        xCnt++;
    }
    while(n > 0) {
        n -= c;
        yCnt++;
    }
    cout << min(xCnt * b, yCnt * d) << endl;
    return 0;
}
