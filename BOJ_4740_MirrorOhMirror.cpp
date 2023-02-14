#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    string str;
    while(getline(cin, str) && str != "***") {
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }
}
