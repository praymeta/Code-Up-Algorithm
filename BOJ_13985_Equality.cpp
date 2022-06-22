#include <iostream>
using namespace std;

int main(void) {
    char s[10];
    cin.getline(s, 10);
    int a, b, c;
    a = s[0] - '0';
    b = s[4] - '0';
    c = s[8] - '0';

    if(a + b == c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
