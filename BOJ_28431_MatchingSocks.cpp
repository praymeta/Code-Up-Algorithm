#include <iostream>
using namespace std;

int main(void) {
    int temp, socks[10] = {0, };
    for(int i = 0; i < 5; i++) {
        cin >> temp;
        socks[temp]++;
    }
    for(int i = 0; i < 10; i++) {
        if(socks[i] % 2 != 0) {
            cout << i;
            break;
        }
    }
}
