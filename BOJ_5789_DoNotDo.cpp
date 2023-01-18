#include <iostream>
using namespace std;

int main(void) {
    int n;
    string str;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str;
        if(str[str.size() / 2 - 1] == str[str.size() / 2]) {
            cout << "Do-it\n";
        } else {
            cout << "Do-it-Not\n";
        }
    }
}
