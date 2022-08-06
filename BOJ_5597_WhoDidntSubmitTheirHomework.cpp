#include <iostream>
using namespace std;

int main(void) {
    int submit[31] = {0};
    int n, cnt = 1;

    while(cnt <= 28) {
        cin >> n;
        submit[n] = 1;
        cnt++;
    }
    cnt = 1;
    n = 1;
    while(cnt <= 2) {
        if(submit[n] != 1) {
            cout << n << endl;
            cnt++;
        }
        n++;
    }

    return 0;
}
