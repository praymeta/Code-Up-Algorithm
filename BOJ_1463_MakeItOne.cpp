#include <iostream>
using namespace std;
int dp[1000001];


int main(void) {
    int n;
    cin >> n;

    dp[1] = 0;
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + 1;
        if(!(i % 3)) {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }if(!(i % 2)) {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }
    }
    
    cout << dp[n] << endl;
    return 0;
}
