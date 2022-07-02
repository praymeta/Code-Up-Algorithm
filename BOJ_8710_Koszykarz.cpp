#include <iostream>
using namespace std;

int main(void) {
    int k, w, m, cnt = 0;
    cin >> k >> w >> m;
    while(k < w) {
        k += m;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
