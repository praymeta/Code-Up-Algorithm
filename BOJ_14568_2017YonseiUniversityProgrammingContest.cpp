#include <iostream>
using namespace std;

int main(void) {
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= n; k++) {
                if(k >= j + 2 && i % 2 == 0 && i + j + k == n) cnt++;
            }
        }
    }
    cout << cnt;
}
