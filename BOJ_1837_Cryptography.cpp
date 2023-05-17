#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string p;
    int k, ret, prime[1000001], ans = 0x3f3f3f3f;
    cin >> p >> k;
    for(int i = 2; i * i <= 1000000; i++) {
        if(prime[i]) continue;
        for(int j = 2 * i; j <= 1000000; j += i) {
            prime[j] = 1;
        }
    }
    for(int i = 2; i <= k; i++) {
        ret = 0;
        if(prime[i]) continue;
        for(int j = 0; j < p.length(); j++) {
            ret = (ret * 10 + p[j] - '0') % i;
        }
        if(!ret) {
            ans = i;
            break;
        }
    }
    if(ans < k) cout << "BAD " << ans;
    else cout << "GOOD";
}
