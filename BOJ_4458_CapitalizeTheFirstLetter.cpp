#include <iostream>
using namespace std;

int main(void) {
    int n;
    string str;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        getline(cin, str);
        str[0] = toupper(str[0]);
        cout << str << '\n';
    }
}
