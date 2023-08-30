#include <iostream>
using namespace std;

int main(void) {
    int n, t, l, minTime = 200;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t >> l;
        if(t + l < minTime)
            minTime = t + l;
    }
    cout << minTime;
}
