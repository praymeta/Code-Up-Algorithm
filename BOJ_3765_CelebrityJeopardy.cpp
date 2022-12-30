#include <iostream>
using namespace std;

int main(void) {
    string str;
    int n;
    while(true) {
        getline(cin, str);
        if(str == "") break;
        cout << str << '\n';
    }
}
