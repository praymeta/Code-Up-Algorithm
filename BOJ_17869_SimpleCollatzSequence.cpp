#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, cnt = 0;
    cin >> n;
    while(n > 1) {
        cnt++;
        if(n % 2) n += 1;
        else n /= 2;
    }
    cout << cnt;
}
