#include <iostream>
#include <cstring>
using namespace std;

int dp[46];

int fibonacci(int n) {
    if(n == 0) return 0;
    else if(n == 1) return 1;

    if(dp[n] != -1) return dp[n];
    return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << fibonacci(n);
}
