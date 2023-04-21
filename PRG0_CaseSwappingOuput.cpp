#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] < 97) str[i] = tolower(str[i]);
        else str[i] = toupper(str[i]);
    }
    cout << str;
    return 0;
}