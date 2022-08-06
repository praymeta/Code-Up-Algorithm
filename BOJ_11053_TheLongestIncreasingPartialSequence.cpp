#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int length, maxValue = 0;
    cin >> length;
    int arr[length+1], dp[length+1];
    for(int i = 1; i <= length; i++) {
        cin >> arr[i];
        dp[i] = 1;
    }
    for(int i = 1; i <= length; i++) {
        for(int j = 1; j < i; j++) {
            if(arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    for(int i = 1; i <= length; i++) {
        if(maxValue < dp[i]) {
            maxValue = dp[i];
        }
    }
    cout << maxValue << endl;
    return 0;
}
