#include <iostream>
using namespace std;

int main(void) {
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cnt++;
        cout << i << ' ';
        if(cnt >= 6) {
            cout << "Go!" << ' ';
            cnt = 0;
        }
    }
    if(cnt != 0) {
        cout << "Go!";
    }
}
