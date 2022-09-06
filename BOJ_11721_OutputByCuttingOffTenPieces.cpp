#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++) {
        cout << s[i];
        if((i + 1) % 10 == 0) {
            cout << '\n';
        }
    }
    cout << '\n';
    return 0;
}
