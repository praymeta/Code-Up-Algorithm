#include <iostream>
using namespace std;

int main(void) {
    int a[4], fence[101] = {0, }, cnt = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    for(int i = a[0]; i < a[1]; i++) fence[i]++;
    for(int i = a[2]; i < a[3]; i++) fence[i]++;
    for(int i = 0; i < 101; i++) {
        if(fence[i] != 0) cnt++;
    }
    cout << cnt;
}
