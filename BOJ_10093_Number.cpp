#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long a, b, l, r;
    cin >> a >> b;
    r = max(a, b);
    l = min(a, b);
    if(l == r) cout << 0;
    else {
        cout << r - l - 1 << '\n';
        for(unsigned long long i = l + 1; i < r; i++) {
            cout << i << ' ';
        }
    }
}
