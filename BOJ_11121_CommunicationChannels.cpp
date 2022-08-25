#include <iostream>
using namespace std;

int main(void) {
    int t;
    string strIn, strOut;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> strIn >> strOut;
        if(strIn == strOut) {
            cout << "OK" << endl;
        } else {
            cout << "ERROR" << endl;
        }
    }
}