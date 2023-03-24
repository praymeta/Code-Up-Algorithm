#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, n, a, b, c, profit, result = 0;
    cin >> t;
    while(t--) {
        cin >> n;
        result = 0;
        for(int i = 0; i < n; i++) {
            cin >> a >> b >> c;
            profit = max(a, max(b, c));
            if(profit > 0) result += profit;
        }
        cout << result << '\n';
    }
}
