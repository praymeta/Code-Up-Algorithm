#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int stick[3];
    for(int i = 0; i < 3; i++) {
        cin >> stick[i];
        stick[i] *= stick[i];
    }
    sort(stick, stick + 3);
    if(stick[0] == stick[1] && stick[1] == stick[2]) {
        cout << '2' << endl;
    } else if(stick[0] + stick[1] == stick[2]) {
        cout << '1' << endl;
    } else {
        cout << '0' << endl;
    }
    return 0;
}
