#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int children, maxValue = 0;
    cin >> children;
    int num[children+1], dp[children+1];
    for(int i = 1; i <= children; i++) {
        cin >> num[i];
        dp[i] = 1;
    }
    for(int i = 1; i <= children; i++) {
        for(int j = 1; j <i; j++) {
            if(num[i] > num[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    for(int i = 1; i <= children; i++) {
        if(maxValue < dp[i]) {
            maxValue = dp[i];
        }
    }
    cout << children - maxValue << endl;
    return 0;
}
