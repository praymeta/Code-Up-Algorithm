#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cin >> m;
    cin >> n;
    int prime[10001];
    int sum = 0;
    int min = 10000;
    for(int i = 0; i < 10001; i++) {
        prime[i] = 1;
    }

    for(int i = m; i <= n; i++) {
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                prime[i] = 0;
                break;
            }
        }
    }
    prime[1] = 0;
    for(int i = m; i <= n; i++) {
        if(prime[i] == 1) {
            sum += i;
            if(i < min) {
                min = i;
            }
        }
    }
    
    if(sum == 0) {
        cout << -1 << endl;
        return 0;
    }
    cout << sum << endl;
    cout << min << endl;
    return 0;
}
