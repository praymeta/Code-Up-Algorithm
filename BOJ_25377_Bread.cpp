#include <iostream>
using namespace std;

int main(void) {
    int n, a, b, minTime = 1001;
    cin >> n;
    int minute[n];
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(a <= b) {
            minute[i] = b;
        } else {
            minute[i] = 1002;
        }
        if(minute[i] < minTime) {
            minTime = minute[i];
        }
    }
    if(minTime == 1001) {
        cout << "-1";
    } else {
        cout << minTime;
    }
    return 0;
}
