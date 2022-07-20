#include <iostream>
using namespace std;

int main(void) {
    int t, len;
    cin >> t;
    string str;
    for(int i = 0; i < t; i++) {
        cin >> str;
        len = str.length();
        if(6 <= len && len <= 9) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
