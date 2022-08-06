#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int abc[3];
    for(int i = 0; i < 3; i++) {
        cin >> abc[i];
    }
    sort(abc, abc + 3);
    if(abc[0] == abc[1] || abc[1] == abc[2] || abc[0] + abc[1] == abc[2]) {
        cout << "S";
    } else {
        cout << "N";
    }
    return 0;
}
