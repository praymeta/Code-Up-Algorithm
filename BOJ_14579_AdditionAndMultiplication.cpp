#include <iostream>
using namespace std;

int sum_fac(int c) {
    int d = 0;
    for(int i = 1; i <= c; i++) {
        d += i;
    }
    return d;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    int ans = 1;
    for(int i = a; i <= b; i++) {
        ans = ans * sum_fac(i);
        ans %= 14579;
    }
    if(a < b && a >= 1 && b <= 1000) {
        cout << ans;
    }
}
