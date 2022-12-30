#include <iostream>
using namespace std;

int main(void) {
    string str;
    int a = 0, b = 0;
    cin >> str;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'A') {
            a++;
        } else {
            b++;
        }
    }
    cout << a << " : " << b;
}
