#include <iostream>
using namespace std;

int main(void) {
    string str;
    cin >> str;
    if(str.length() < 5) cout << "not cute";
    else {
        str = str.substr(str.length() - 5, 5);
        if(str == "driip") cout << "cute";
        else cout << "not cute";
    }
}
