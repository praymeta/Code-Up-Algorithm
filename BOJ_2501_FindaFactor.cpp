#include <iostream>
using namespace std;

int main(void) {
    int n, k, cnt = 0;
    cin >> n >> k;
    int factor[n];
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            factor[cnt] = i;
            cnt++;
        }
    }
    if(k > cnt) cout << '0';
    else cout << factor[k - 1];
}
