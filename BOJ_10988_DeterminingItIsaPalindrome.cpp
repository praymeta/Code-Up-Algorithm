#include <iostream>
using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i = 0; i < str.length() / 2; i++) {
        if(str[i] != str[str.length() - 1 - i]) {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
}
