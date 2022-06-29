#include <iostream>
using namespace std;

int main(void) {
    int phone[4];
    for(int i = 0; i < 4; i++) {
        cin >> phone[i];
    }
    if(phone[0] == 8 || phone[0] == 9) {
        if(phone[3] == 8 || phone[3] == 9) {
            if(phone[1] == phone[2]) {
                cout << "ignore" << endl;
                return 0;
            }
        }
    }
    cout << "answer" << endl;
    return 0;
}
