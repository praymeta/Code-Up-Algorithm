#include <iostream>
using namespace std;

int main(void) {
    string number;
    cin >> number;
    int cnt = 0;
    for(int i = number.length() - 1; i >= 0; i--) {
        if(number[i] != '0') {
            for(int j = 0; j < i; j++) {
                if(number[j] == '0') cnt++;
            }
            break;
        }
    }
    cout << cnt;
}
