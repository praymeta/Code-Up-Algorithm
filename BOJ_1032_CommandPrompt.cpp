#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int n;
    char temp;
    string str[50];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for(int i = 0; i < str[0].length(); i++) {
        temp = str[0][i];
        for(int j = 0; j < n; j++) {
            if(temp != str[j][i]) {
                temp = '?';
                break;
            }
        }
        cout << temp;
    }
}
