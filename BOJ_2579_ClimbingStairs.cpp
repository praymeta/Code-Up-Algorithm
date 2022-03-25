#include <iostream>
using namespace std;
int dp[1000] = {0};

int main(void) {
    int n, cnt = 0;
    cin >> n;
    int stairs[n + 1];
    stairs[0] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> stairs[i];
    }
    dp[0] = stairs[0];
    dp[1] = stairs[1];
    dp[2] = dp[1] + stairs[2];
    for(int i = 3; i <= n; i++) {
        dp[i] = max(dp[i - 2] + stairs[i], dp[i - 3] + stairs[i - 1] + stairs[i]);
    }
    cout << dp[n];
    return 0;
}
