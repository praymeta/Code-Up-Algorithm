#include <iostream>
using namespace std;

int main(void) {
    string str;
    char temp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str;
        temp = str[0];
        cout << temp;
        for(int j = 1; j < str.size(); j++) {
            if(str[j] != temp) {
                temp = str[j];
                cout << temp;
            }
        }
        cout << '\n';
    }
}
