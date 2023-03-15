//dp[n] = de[n - 2] + dp[n - 3]
#include <iostream>
#include <cstring>
using namespace std;

unsigned long long dp[101];

unsigned long long padovan(unsigned long long n) {
    if(n == 1) return 1;
    else if(n == 2) return 1;
    else if(n == 3) return 1;

    if(dp[n] != -1) return dp[n];
    return dp[n] = padovan(n -2) + padovan(n - 3);
}

int main(void) {
    int t;
    unsigned long long n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        memset(dp, -1, sizeof(dp));
        cout << padovan(n) << '\n';
    }
}
