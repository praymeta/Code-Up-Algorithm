#include <iostream>
using namespace std;

int main(void) {
    string number;
    cin >> number;
    if(number[0] == number[1]) cout << '1';
    else cout << '0';
}
