#include <iostream>
using namespace std;

int main(void) {
    int i = 0;
    string str;
    cin >> str;
    while(i < str.length()) {
        cout << str[i];
        i += str[i] - 64;
    }
}
