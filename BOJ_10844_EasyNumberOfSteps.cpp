#include <iostream>
using namespace std;
long long dp[101][10] = {0};
#define MAX 1000000000

int main(void) {
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= 9; i++) {
        dp[1][i] = 1;
    }
    dp[1][0] = 0;
    for(int i = 2; i <= n; i++) {
        for(int j = 0; j <= 9; j++) {
            if(j == 0) {
                dp[i][j] = dp[i - 1][j + 1] % MAX;
            } else if(j == 9) {
                dp[i][j] = dp[i - 1][j - 1] % MAX;
            } else {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MAX;
            }
        }
    }
    for(int i = 0; i <= 9; i++) {
        sum = (sum + dp[n][i]) % MAX;
    }
    cout << (sum % 1000000000) << endl;
    return 0;
}
