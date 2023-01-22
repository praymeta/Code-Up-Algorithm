#include <iostream>
using namespace std;

int main(void) {
    int n, cnt = 0;
    cin >> n;
    for(int a = 1; a <= 500; a++) {
        for(int b = 1; b <= 500; b++) {
            if((a * a) == (b * b) + n) {
                cnt++;
            }
        }
    }
    cout << cnt;
}