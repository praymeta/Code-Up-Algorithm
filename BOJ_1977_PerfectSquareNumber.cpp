#include <iostream>
using namespace std;

int main(void) {
    int m, n, sum = 0, cnt = 0, chk[10001] = {0, };
    cin >> m >> n;
    for(int i = 1; i <= n; i++) {
        if(i * i >= m && i * i <= n) {
            sum += i * i;
            cnt++;
            chk[i] = 1;
        }
    }
    
    if(cnt == 0) {
        cout << -1;
        return 0;
    }

    for(int i = 1; i < 10001; i++) {
        if(chk[i] == 1) {
            cout << sum << '\n' << i * i;
            break;
        }
    }
}
