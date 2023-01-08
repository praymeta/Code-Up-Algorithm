#include <iostream>
using namespace std;

int main(void) {
    int n, t;
    cin >> n >> t;
    int work[n];
    for(int i = 0; i < n; i++) {
        cin >> work[i];
    }
    int i = 0, cnt = 0;
    while(t >= work[i]) {
        t -= work[i];
        i++, cnt++;
        if(cnt >= n) {
            break;
        }
    }
    cout << cnt;
}
