#include <iostream>
using namespace std;

int main(void) {
    int c = 0, b = 0;
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'C') c++;
        else b++;
    }
    cout << c / 2 + b / 2;
}
