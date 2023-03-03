#include <iostream>
using namespace std;

int main(void) {
    int n;
    string str;
    cin >> n >> str;
    if(str[n - 1] != 'G') {
        str += "G";
        cout << str;
    } else {
        for(int i = 0; i < n - 1; i++) {
            cout << str[i];
        }
    }
}
