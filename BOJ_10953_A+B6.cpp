#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int t, a, b;
    string str;
    cin >> t;
    cin.ignore();
    for(int i = 0; i < t; i++) {
        getline(cin, str);
        a = str[0] - '0';
        b = str[2] - '0';
        cout << a + b << endl;
    }
}
