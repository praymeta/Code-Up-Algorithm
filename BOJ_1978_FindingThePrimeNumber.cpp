#include <iostream>
using namespace std;

int main(void) {
    int n, cnt = 0;
    cin >> n;
    int numArray[n];
    for(int i = 0; i < n; i++) {
        cin >> numArray[i];
        for(int j = 2; j < numArray[i]; j++) {
            if(numArray[i] % j == 0) {
                numArray[i] = 0;
                break;
            }
        }
        if(numArray[i] != 1 && numArray[i] != 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
