#include <iostream>
using namespace std;

int main(void) {
    int t, v, cnt = 0;
    cin >> t;
    int number[t + 1];
    for(int i = 1; i <= t; i++) {
        scanf("%d ", &number[i]);
    }
    cin >> v;
    for(int i = 1; i <= t; i++) {
        if (number[i] == v) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
