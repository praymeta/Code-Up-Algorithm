#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int temp = 0;
    string str;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '-') {
            cout << str[temp];
            temp = i + 1;
        }
        if(i == str.length() - 1) {
            cout << str[temp];
        }
    }
}
