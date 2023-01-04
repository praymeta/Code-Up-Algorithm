#include <iostream>
using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'a') str[i] = '4';
        else if(str[i] == 'e') str[i] = '3';
        else if(str[i] == 'i') str[i] = '1';
        else if(str[i] == 'o') str[i] = '0';
        else if(str[i] == 's') str[i] = '5';
    }
    cout << str;
}
