#include <iostream>
using namespace std;

int main(void) {
    string number;
    cin >> number;
    for(int i = 0; i < number.size(); i++) {
        if(number[i] == '0') {
            cout << "0000" << '\n';
            cout << "0  0" << '\n';
            cout << "0  0" << '\n';
            cout << "0  0" << '\n';
            cout << "0000" << '\n';
            cout << '\n';
        } else if(number[i] == '1') {
            cout << "   1" << '\n';
            cout << "   1" << '\n';
            cout << "   1" << '\n';
            cout << "   1" << '\n';
            cout << "   1" << '\n';
            cout << '\n';
        } else if(number[i] == '2') {
            cout << "2222" << '\n';
            cout << "   2" << '\n';
            cout << "2222" << '\n';
            cout << "2" << '\n';
            cout << "2222" << '\n';
            cout << '\n';
        } else if(number[i] == '3') {
            cout << "3333" << '\n';
            cout << "   3" << '\n';
            cout << "3333" << '\n';
            cout << "   3" << '\n';
            cout << "3333" << '\n';
            cout << '\n';
        } else if(number[i] == '4') {
            cout << "4  4" << '\n';
            cout << "4  4" << '\n';
            cout << "4444" << '\n';
            cout << "   4" << '\n';
            cout << "   4" << '\n';
            cout << '\n';
        } else if(number[i] == '5') {
            cout << "5555" << '\n';
            cout << "5" << '\n';
            cout << "5555" << '\n';
            cout << "   5" << '\n';
            cout << "5555" << '\n';
            cout << '\n';
        } else if(number[i] == '6') {
            cout << "6666" << '\n';
            cout << "6" << '\n';
            cout << "6666" << '\n';
            cout << "6  6" << '\n';
            cout << "6666" << '\n';
            cout << '\n';
        } else if(number[i] == '7') {
            cout << "7777" << '\n';
            cout << "   7" << '\n';
            cout << "   7" << '\n';
            cout << "   7" << '\n';
            cout << "   7" << '\n';
            cout << '\n';
        } else if(number[i] == '8') {
            cout << "8888" << '\n';
            cout << "8  8" << '\n';
            cout << "8888" << '\n';
            cout << "8  8" << '\n';
            cout << "8888" << '\n';
            cout << '\n';
        } else {
            cout << "9999" << '\n';
            cout << "9  9" << '\n';
            cout << "9999" << '\n';
            cout << "   9" << '\n';
            cout << "   9" << '\n';
            cout << '\n';
        }
    }
}
