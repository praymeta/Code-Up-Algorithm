#include <iostream>
using namespace std;

int main(void) {
    string str;
    int n = 0;
    while(true) {
        getline(cin, str);
        if(str == "") {
            break;
        }
        n++;
    }
    cout << n;
}
