#include <iostream>
using namespace std;

int main(void) {
    int n, cnt = 0;
    cin >> n;
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if(n - i - j == 0)
                cnt++;
        }
    }
    cout << cnt;
}
