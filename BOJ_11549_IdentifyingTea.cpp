#include <iostream>
using namespace std;

int main(void) {
    int t, cnt = 0, array[5];
    cin >> t;
    for(int i = 0; i < 5; i++) {
        cin >> array[i];
    }
    for(int i = 0; i < 5; i++) {
        if (t == array[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
