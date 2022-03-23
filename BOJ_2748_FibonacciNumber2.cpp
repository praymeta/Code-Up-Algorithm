#include <iostream>
using namespace std;
long long dp[91] = {0};

long long fibonacci(int n) {
    if(n == 0) {
        dp[n] = 0;
        return dp[n];
    } else if(n == 1) {
        dp[n] = 1;
        return dp[n];
    }
    if(dp[n] != 0) {
        return dp[n];
    }
    dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return dp[n];
}

int main(void) {
    int n;
    long long result;
    cin >> n;
    result = fibonacci(n);
    cout << result << endl;
    return 0;
}
