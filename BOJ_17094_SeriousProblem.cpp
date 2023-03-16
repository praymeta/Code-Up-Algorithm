#include <iostream>
using namespace std;

int main(void) {
    int n, two = 0, e = 0;
    string str;
    cin >> n >> str;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '2') two++;
        else e++;
    }
    if(two > e) cout << 2;
    else if(two == e) cout << "yee";
    else cout << 'e';
}
