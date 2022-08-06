#include <iostream>
using namespace std;

int main(void) {
    int moving[4], inc = 1, dsc = 1, same = 1;
    for(int i = 0; i < 4; i++) {
        cin >> moving[i];
    }
    for(int i = 0; i < 3; i++) {
        if(moving[i] < moving[i + 1]) {
            inc++;
        } else if(moving[i] > moving[i + 1]) {
            dsc++;
        } else if(moving[i] == moving[i + 1]) {
            same++;
        }
    }
    if(inc == 4) {
        cout << "Fish Rising" << endl;
    } else if(dsc == 4) {
        cout << "Fish Diving" << endl;
    } else if(same == 4) {
        cout << "Fish At Constant Depth" << endl;
    } else {
        cout << "No Fish" << endl;
    }
    return 0;
}
