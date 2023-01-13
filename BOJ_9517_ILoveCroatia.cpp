#include <iostream>
using namespace std;

int main(void) {
    int k, n, t, timer = 210;
    char z;
    cin >> k >> n;
    int time[n];
    char answer[n];
    for(int i = 0; i < n; i++) {
        cin >> t >> z;
        time[i] = t;
        answer[i] = z;
    }
    for(int i = 0; i < n; i++) {
        timer -= time[i];
        if(timer <= 0) {
            cout << k;
            break;
        }
        if(answer[i] == 'T') k = k % 8 + 1;
    }
}
