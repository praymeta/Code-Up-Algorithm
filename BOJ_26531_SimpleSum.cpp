#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    string str;
    getline(cin, str);
    a = str[0] - '0';
    b = str[4] - '0';
    c = str[8] - '0';
    if(a + b == c) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
