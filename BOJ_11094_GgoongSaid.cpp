#include <iostream>
using namespace std;

int main(void) {
    int n;
    string str;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        getline(cin, str);
        string temp;
        temp = str.substr(0, 10);
        if(temp == "Simon says") {
            for(int j = 10; j < str.length(); j++) {
                cout << str[j];
            }
            cout << '\n';
        }
    }
}
