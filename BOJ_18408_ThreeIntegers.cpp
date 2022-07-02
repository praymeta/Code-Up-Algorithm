#include <iostream>
using namespace std;

int main(void) {
    int abc[3], cnt = 0;
    for(int i = 0; i < 3; i++) {
        cin >> abc[i];
        if(abc[i] == 1) {
            cnt++;
        }
    }
    if(cnt >= 2) {
        cout << '1' << endl;
    } else {
        cout << '2' << endl;
    }
    return 0;
}
