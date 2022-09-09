#include <iostream>
using namespace std;

int main(void) {
    int n, cnt = 1;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = n - i; j > 0; j--) {
            cout << ' ';
        }
        while(cnt <= i * 2 - 1) {
            cout << '*';
            cnt++;
        }
        cnt = 1;
        cout << endl;
    }
}
