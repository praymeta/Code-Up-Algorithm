#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    getline(cin, str);
    if(str.find("d2") != string::npos || str.find("D2") != string::npos) cout << "D2";
    else cout << "unrated";
}
