#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string k;
    int l;
    cin >> k >> l;
    for(int i = 2; i < l; ++i) {
        int ans = 0, temp = 1;
        for(int j = k.length() - 1; j >= 0; --j) {
            ans = (ans + (k[j] - '0') * temp) % i;
            temp *= 10;
            temp %= i;
        }
        if(ans == 0) {
            cout << "BAD " << i;
            return 0;
        }
    }
    cout << "GOOD";
}
