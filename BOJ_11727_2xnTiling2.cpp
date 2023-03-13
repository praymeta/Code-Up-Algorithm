// dp[n] = dp[n - 1] + 2 * dp[n - 2]
#include <iostream>
#include <cstring>
using namespace std;

int dp[1001];

int tilingCounter(int n) {
    if(n == 1) return 1;
    else if(n == 2) return 3;

    if(dp[n] != -1) return dp[n];
    return dp[n] = (tilingCounter(n - 1) + 2 * tilingCounter(n - 2)) % 10007;
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << tilingCounter(n);
}
