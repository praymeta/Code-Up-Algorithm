#include <iostream>
using namespace std;

int Ti[16] = {0, };
int Pi[16] = {0, };
int dp[16] = {0, };

int main(void) {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> Ti[i] >> Pi[i];
    }
    for(int i = n; i > 0; i--) {
        int takedDay = i + Ti[i];
        if(takedDay > n + 1) dp[i] = dp[i + 1];
        else dp[i] = max(dp[takedDay] + Pi[i], dp[i + 1]);
    }
    cout << dp[1];
}
